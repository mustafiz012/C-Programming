//http://lightoj.com:81/volume/problem/1004

#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N;
int input[101][33222];
int main()
{
	scanf("%d", &T);
	while (T--){
		scanf("%d", &N);
		int ii = 0;
		bool flag = false;
		for (int i = 0; i < 2 * N - 1; i++){
			if (flag) ii--; else ii++; if (i == N-1) flag = true;
			for (int j = 0; j < ii; j++){
				scanf("%d", &input[i][j]);
			}
		}

		for (int i = 0; i < 2 * N - 1; i++) {
			if (flag) ii--; else ii++; if (i == N - 1) flag = true;
			for (int j = 0; j < ii; j++) {
				printf("%d ", input[i][j]);
			}printf("\n");
		}

		//cin >> N;

		/*for (int i = 0; i < 2 * N - 1; i++){
			if (flag) ii--; else ii++; if (i == N-1) flag = true;
			for (int j = 0; j < ii; j++){
				printf("%d", input[i][j]);
			}printf("\n");
		}*/
	}
	return 0;
}