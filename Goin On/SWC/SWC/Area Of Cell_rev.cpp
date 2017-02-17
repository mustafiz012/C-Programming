#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<stdio.h>
using namespace std;
int T, N, NoQ, row, column, Ans;
char grid[SIZE][SIZE], done[SIZE][SIZE];
int fx8[] = { 0, 1, 0, -1, 1, -1, 1, -1 };
int fy8[] = { 1, 0, -1, 0, 1, -1, -1, 1 };
void AoC(int row, int column, int counter){
	int x, y;
	for (int i = 0; i < 8; i++){
		x = row + fx8[i];
		y = column + fy8[i];
		if (grid[x][y] == 'W' && done[x][y] == 0 && x >= 0 && y >= 0 && x < N && y < N) {
			done[x][y] = 1;
			AoC(x, y, counter + 1);
			done[x][y]=0;
		}
	}
	if (Ans<counter)
		Ans = counter;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		cin >> N;
		getchar();
		for (int i = 0; i < N; i++)
			scanf("%s", grid[i]);
		cin >> NoQ;
		for (int i = 0; i < NoQ; i++)
		{
			cin >> row >> column;
			for (int m = 0; m < N; m++)
				for (int n = 0; n < N; n++)
					done[m][n] = 0;
			Ans = 0;
			AoC(row, column, 0);
			printf("%d\n", Ans);
		}
	}
	return 0;
}