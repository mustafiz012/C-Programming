#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, N, counter;
int countt;
char sequences[200000];
void readCase() {
	//for (int i = 0; i < N; i++)
		scanf("%s", sequences);
}
bool checking(int i, int countt) {
	if (sequences[i] == '<')
	{
		countt--;
		if (countt < 0)
			return true;
	}
	else
	{
		countt++;
		if (countt > N - 1)
			return false;
		else checking(i + 1, countt);
	}
}
void solveCase() {
	counter = 0;
	for (int i = 0; i < N; i++) {
		if (checking(i, 0))
			counter++;
	}
}

void printCase() {
	printf("%d\n", counter);
}
int main() {
	freopen("input.txt", "r", stdin);
	//cin >> T;
	while (scanf("%d", &N)==1) {
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}