#define _CRT_SECURE_NO_WARNINGS
#define SIZE 9
#include<iostream>
#include<stdio.h>
using namespace std;

int done[SIZE][SIZE], grid[SIZE][SIZE];
int P1, P2, sR, sC, dR, dC, Ans;
void counting(int r, int c, int counter){
	if (r == dR && c == dC){
		if (counter < Ans)
			Ans = counter;
		return;
	}
	if (counter > Ans)
		return;
	if (done[r][c] == 1 || r <= 0 || c <= 0 || r>8 || c>8)
		return;
	done[r][c] = 1;
	counting(r - 1, c + 2, counter + 1);
	counting(r + 1, c + 2, counter + 1);
	counting(r - 1, c - 2, counter + 1);
	counting(r + 1, c - 2, counter + 1);
	counting(r - 2, c - 1, counter + 1);
	counting(r + 2, c - 1, counter + 1);
	counting(r - 2, c + 1, counter + 1);
	counting(r + 2, c + 1, counter + 1);
	done[r][c] = 0;
}
int main()
{
	while (cin >> P1 >> P2){
		Ans = 99999;
		sR = P1 / 10; sC = P1 % 10;
		dR = P2 / 10; dC = P2 % 10;
		for (int i = 0; i < dR; i++)
			for (int j = 0; j < dC; j++)
				done[i][j] = 0;
		counting(sR, sC, 0);
		printf("%d\n", Ans);
	}
	return 0;
}