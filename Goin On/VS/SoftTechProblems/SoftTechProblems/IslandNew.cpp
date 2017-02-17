#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<stdio.h>
#include<iostream>
using namespace std;

int M, N, Ans;
char grid[SIZE][SIZE];
int fx8[] = { 1, 0, -1, 0, 1, -1, 1, -1 };
int fy8[] = { 0, 1, 0, -1, 1, -1, -1, 1 };
int done[SIZE][SIZE];

void groupingWaterLand(int wX, int wY){
	int x, y;
	for (int i = 0; i < 8; i++){
		x = wX + fx8[i];
		y = wY + fy8[i];
		if (done[x][y] == 0 && x >= 0 && y >= 0 && x < M && y < N && grid[x][y]=='@') {
			done[x][y] = 1;
			groupingWaterLand(x, y);
		}
	}

}
int main()
{
	freopen("input.txt", "r", stdin);
	while (scanf("%d%d", &M, &N) == 2){
		if (M == 0)
			break;
		Ans = 0;
		for (int i = 0; i < M; i++)
			scanf("%s", grid[i]);
		for (int i = 0; i < M; i++)
			for (int j = 0; j < N; j++)
				done[i][j] = 0;
		for (int i = 0; i < M; i++){
			for (int j = 0; j < N; j++){
				if (grid[i][j] == '@' && done[i][j]==0)
				{
					Ans++;
					done[i][j] = 1;
					groupingWaterLand(i, j);
					break;
				}
			}
		}
		printf("%d\n", Ans);
	}
	return 0;
}