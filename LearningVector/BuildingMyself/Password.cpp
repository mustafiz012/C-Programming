#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N;
char password[101];
void readCase() {
	cin >> N;
	scanf("%s", password);
}
void update(int i, int limm) {
	for (int ii = i; ii < limm; ii++)if(ii+2<=limm) {
		password[ii] = password[ii + 2];
	}
}
void solve(int index, int lim) {
	for (int j = index; j < lim - 1; j++) {
		if (j + 1 <= lim - 1 && password[j] == password[j + 1]) {
			//printf("yeah\n");
			N = N - 2;
			update(j, N);
			solve(j - 1, lim - 2);
		}
	}
}
void solveCase() {
	solve(0, N);
}

void printCase() {
	for (int i = 0; i < N; i++)
		printf("%c", password[i]);
	printf("\n");
}
int main() {
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--) {
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}