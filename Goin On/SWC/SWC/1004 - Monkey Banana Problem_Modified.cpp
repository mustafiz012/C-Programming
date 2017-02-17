#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N;
int input[101][33222], done[101][33222];
int temp;

void calculation(int x, int y, int counter) {

	if (Ans < counter)
		Ans = counter;

	if (x >= N || y >= 2 * N || x < 0 || y < 0 || input[x][y] == -1)
		return;
	if (x - 1 >= 0 && y + 1 < 2 * N - 1 && 0 != done[x - 1][y + 1]){
		done[x - 1][y + 1] = 0;
		calculation(x - 1, y + 1, counter + input[x - 1][y + 1]);
	}

	if (x + 1 >= 0 && y + 1 < 2 * N - 1 && 0 != done[x + 1][y + 1]){
		done[x + 1][y + 1] = 0;
		calculation(x + 1, y + 1, counter + input[x + 1][y + 1]);
	}

}

int main()
{
	//freopen("input.txt", "r", stdin);
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		Ans = 0;
		int ii = 0;
		bool flag = false;
		for (int i = 0; i < 2 * N - 1; i++)
			for (int j = 0; j < 2 * N - 1; j++)
				done[i][j] = 1;
		for (int i = 0; i < 2 * N - 1; i++) {
			if (flag) ii--; else ii++; if (i == N - 1) flag = true;
			for (int j = 0; j < ii; j++) {
				scanf("%d", &input[i][j]);
			}
		}
		calculation(0, 0, 0);
		printf("%d\n", Ans);
		/*bool flagTemp = false;
		for (int i = 0; i < 2 * N - 1; i++) {
		if (flagTemp) ii--; else ii++; if (i == N - 1) flagTemp = true;
		int j;
		for (j = 0; j < ii - 1; j++) {
		printf("%d ", input[i][j]);
		if (input[i][j] != 0)
		temp = input[i][j];
		}printf("\n");
		}*/

		//cin >> N;
	}
	return 0;
}
