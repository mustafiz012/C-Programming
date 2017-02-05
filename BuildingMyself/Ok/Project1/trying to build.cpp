#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<cstdio>
#include<iostream>
using namespace std;
int T, Ans, N;
int input[101][33222];
int main()
{
	cin >> T;
	while (T--) {
		cin >> N;
		int ii = 0;
		bool flag = false;
		for (int i = 0; i < 2 * N - 1; i++) {
			if (flag) ii--; else ii++; if (i == N - 1) flag = true;
			for (int j = 0; j < ii; j++) {
				//scanf("%d", &input[i][j]);
				cin >> input[i][j];
			}
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