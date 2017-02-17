#define _CRT_SECURE_NO_WARNINGS
#define SIZE 1001
#include<iostream>
#include<stdio.h>
using namespace std;
int grid[SIZE][SIZE], done[SIZE][SIZE], hole[SIZE][SIZE];
int T, R, C, H;
int rN, NoH, cN[SIZE];
int sR, sC, dR, dC;
int Ans, counting;
void counter(int r, int c, int countt){
	if (r >= dR && c >= dC)
	{
		//printf("%d\n", countt);
		if (Ans > countt)
			Ans = countt;
		return;
	}
	if (countt>Ans)
		return;
	if (c + 1 <= C - 1 && hole[r][c + 1] != 1 && done[r][c + 1] == 0){
		done[r][c + 1] = 1;
		counter(r, c + 1, countt + 1);
		done[r][c + 1] = 0;
	}
	if (r + 1 <= R - 1 && hole[r + 1][c] != 1 && done[r + 1][c] == 0){
		done[r + 1][c] = 1;
		counter(r + 1, c, countt + 1);
		done[r + 1][c] = 0;
	}
	if (c - 1 >= 0 && hole[r][c - 1] != 1 && done[r][c - 1] == 0){
		done[r][c - 1] = 1;
		counter(r, c - 1, countt + 1);
		done[r][c - 1] = 0;
	}
	if (r - 1 >= 0 && hole[r - 1][c] != 1 && done[r - 1][c] == 0){
		done[r - 1][c] = 1;
		counter(r - 1, c, countt + 1);
		done[r - 1][c] = 0;
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	while (cin >> R >> C){
		if (R == 0 && C == 0)
			break;
		for (int i = 0; i < R; i++)
			for (int j = 0; j < C; j++)
			{
				done[i][j] = 0;
				hole[i][j] = 0;
			}
		cin >> H;
		for (int k = 0; k < H; k++){
			cin >> rN >> NoH;
			for (int kk = 0; kk < NoH; kk++)
			{
				cin >> cN[kk];
				hole[rN][cN[kk]] = 1;
			}
		}
		cin >> sR >> sC >> dR >> dC;
		Ans = 99999;
		counter(sR, sC, 0);
		printf("%d\n", Ans);
	}
	return 0;
}