#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;
int ChessBoard[9][9], xx1, yy1, xx2, yy2, Ans;
void initChessBoard() {
	for (int i = 1; i < 9; i++)
		for (int j = 1; j < 9; j++)
			ChessBoard[i][j] = 0;
}
int counting(int ii, int jj, int counter) {
	bool flag = false;
	for (int i = ii; i < 9; i++) {
		int j;
		flag = false;
		for (j = jj; j < 9; j++) {
			if (i == xx2 && j == yy2)
			{
				flag = true;
				break;
			}
		}
		if (flag)
		{
			ii = i; jj = j;
			break;
		}
	}

}
int main()
{
	while (scanf("%d%d%d%d", &xx1, &yy1, &xx2, &yy2) == 4) {
		if (xx1 == 0 && yy1 == 0 && xx2 == 0 && yy2 == 0)
			break;
		Ans = 0;
		counting(xx1, yy1, 0);
	}
	return 0;
}