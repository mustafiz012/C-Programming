#define _CRT_SECURE_NO_WARNINGS
#define SIZE 11
#include<stdio.h>
#include<iostream>
using namespace std;
int T, H, W, Ans;
int grid[SIZE][SIZE];
bool xFlag = false, yFlag = false, breakingFlag = false;
int fx4[] = { 0, 1, 0, -1 };
int fy4[] = { 1, 0, -1, 0 };

void generateOutput(int xx1, int yy1, int xx2, int yy2, int counter){
	int x11, y11, x22, y22;
	for (int i = 0; i < 4; i++){
		bool forBreaker = false;
		x11 = xx1 + fx4[i];
		y11 = yy1 + fy4[i];
		x22 = xx2 + fx4[i];
		y22 = yy2 + fx4[i];
		if (grid[x11][y11] == -1 && grid[x22][y22] == -2)
		{
			printf("%d %d %d %d\n", x11, y11, x22, y22);
			breakingFlag = true;
			break;
		}
		if (x11<0 || y11<0 || x22<0 || y22<0 || x11>H - 1 || y11>W - 1 || x22>H - 1 || y22>W - 1){
			forBreaker = true;
			break;
		}
		
		while ((grid[x11][y11] != 9 || grid[x22][y22] != 9) && (x11 != x22 && y22 != y11) && (x11 >= 0 && y11 >= 0 && x11 < H && y11 < W && x22 >= 0 && y22 >= 0 && x22 < H && y22 < W)){
			if (x11 + fx4[i] < H && y11 + fy4[i] < W && x22 + fx4[i] < H && y22 + fy4[i] < W && x11 + fx4[i] >= 0 && y11 + fy4[i] >= 0 && x22 + fx4[i] >= 0 && y22 + fy4[i] >= 0)
			{
				x11 = x11 + fx4[i]; y11 = y11 + fy4[i]; x22 = x22 + fx4[i]; y22 = y22 + fy4[i]; 
				//x11 = x11 + fx4[i]; y11 = y11 + fy4[i]; x22 = x22 + fx4[i]; y22 = y22 + fy4[i];
			}else if (grid[x11][y11] == -1 && grid[x22][y22] == -2)
			{
				printf("%d %d %d %d\n", x11, y11, x22, y22);
				forBreaker = true;
				break;
			}
			else 
				break;
		}
		if (forBreaker)
		{
			breakingFlag = true;
			break;
		}
		else
			generateOutput(x11, y11, x22, y22, counter + 1);
		/*
		if ((grid[x11][y11] != 9 || grid[x22][y22] != 9) && (x11 != x22 && y22 != y11) && (x11 >= 0 && y11 >= 0 && x11 < H && y11 < W && x22 >= 0 && y22 >= 0 && x22 < H && y22 < W))
		generateOutput(x11, y11, x22, y22, counter + 1);
		*/
	}
	if (counter < Ans)
		Ans = counter;
	if (breakingFlag)
		return;
}
int main()
{
	freopen("input.txt", "r", stdin);
	int x1, y1, x2, y2;
	cin >> T;
	while (T--){
		cin >> H >> W;
		Ans = 199;
		breakingFlag = false;
		xFlag = false; yFlag = false;
		for (int i = 0; i < H; i++)
			for (int j = 0; j < W; j++)
				cin >> grid[i][j];
		for (int i = 0; i < H; i++){
			for (int j = 0; j < W; j++){
				if (grid[i][j] == 1){
					x1 = i;
					y1 = j;
					xFlag = true;
				}
				else if (grid[i][j] == 2){
					x2 = i;
					y2 = j;
					yFlag = true;
				}
				if (xFlag && yFlag)
				{
					generateOutput(x1, y1, x2, y2, 0);
					break;
				}
			}
		}
		/*
		if (Ans == 199)
		printf("-1\n");
		else
		printf("%d\n", Ans);
		*/

	}
	return 0;
}
