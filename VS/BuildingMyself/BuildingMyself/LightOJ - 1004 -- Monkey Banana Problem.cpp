//http://lightoj.com:81/volume/problem/1004

#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N;
int input[101][33222], done[101][33222];
int temp;
void calculation(int index, int counter) {
	if (index == 2 * N - 1)
		return;
	bool flag = false;
	int ii = 0;
	for (int i = 0; i < 2 * N - 1; i++) {
		if (flag) ii--; else ii++; if (i == N - 1) flag = true;
		for (int j = 0; j < ii; j++)if(0 != done[i][j]) {
			done[i][j] = 0;
			calculation(index+1, counter+input[i][j]);
			done[i][j] = 1;
		}
	}
	if (Ans < counter)
		Ans = counter;
}
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		Ans = 0;
		int ii = 0;
		bool flag = false;
		for (int i = 0; i < 2 * N - 1; i++) {
			if (flag) ii--; else ii++; if (i == N - 1) flag = true;
			for (int j = 0; j < ii; j++) {
				scanf("%d", &input[i][j]);
				done[i][j] = 1;
			}
		}

		calculation(0, 0);

		//printf("%d\n", Ans);
		/*bool flagTemp = false;
		for (int i = 0; i < 2 * N - 1; i++) {
			if (flagTemp) ii--; else ii++; if (i == N - 1) flagTemp = true;
			int j;
			for (j = 0; j < ii-1; j++) {
				printf("%d ", input[i][j]);
				if (input[i][j] != 0)
					temp = input[i][j];
			}printf("\n");
		}

		cin >> N;*/
	}
	return 0;
}