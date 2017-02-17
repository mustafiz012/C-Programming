#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N, tempN, test = 0;
char password[101];
void readCase() {
	scanf("%d", &N);
	scanf("%s", password);
}
void update(int i, int limm) {
	for (int ii = i; ii <= limm; ii++){
		password[ii] = password[ii + 2];
	}
}
void solve(int index, int lim) {
	if (index == lim)
		return;
	for (int j = index; j < lim - 1; j++) {
		if (j + 1 <= lim - 1 && password[j] == password[j + 1]) {
			tempN = tempN - 2;
			update(j, lim - 2);
			solve(0, lim - 2);
		}
	}
}
void solveCase() {
	tempN = N;
	solve(0, N);
}

void printCase() {
	test++;
	printf("#%d ", test);
	for (int i = 0; i < tempN; i++)
		printf("%c", password[i]);
	printf("\n");
}
int main() {
	freopen("input.txt", "r", stdin);
	while (scanf("%d %s", &N, password) == 2) {
		//readCase();
		solveCase();
		printCase();
	}
	return 0;
}
