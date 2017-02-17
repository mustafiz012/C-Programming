#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#define size 101
using namespace std;

int T, N, M, P, test = 0;
char Grid[size][size];
int Used[size][size];

void initUsed()
{
	int i, j;
	for (i = 0; i < size; i++)for (int j = 0; j < size; j++)
		Used[i][j] = 0;
}

int checkTop(int i, int j)
{
	if (0 == i)
		return 0;
	if ('M' == Grid[i - 1][j])
		return 0;
	if (1 == Used[i - 1][j])
		return 0;
	return 1;
}
int checkBottom(int i, int j)
{
	if (N - 1 == i)
		return 0;
	if ('M' == Grid[i + 1][j])
		return 0;
	if (1 == Used[i + 1][j])
		return 0;
	return 1;
}
int checkLeft(int i, int j)
{
	if (0 == j)
		return 0;
	if ('M' == Grid[i][j - 1])
		return 0;
	if (1 == Used[i][j - 1])
		return 0;
	return 1;
}
int checkRight(int i, int j)
{
	if (M - 1 == j)
		return 0;
	if ('M' == Grid[i][j + 1])
		return 0;
	if (1 == Used[i][j + 1])
		return 0;
	return 1;
}

int Ans;
void go(int i, int j, int p)
{
	int isTop, isBottom, isLeft, isRight;
	Used[i][j] = 1;
	if ('W' == Grid[i][j])
	{
		if (0 == p)
			Ans = 1;
		return;
	}
	isTop = checkTop(i, j);
	isBottom = checkBottom(i, j);
	isLeft = checkLeft(i, j);
	isRight = checkRight(i, j);
	if (isTop + isBottom + isRight + isLeft > 1)
		p--;
	if (isTop)
		go(i - 1, j, p);
	if (isBottom)
		go(i + 1, j, p);
	if (isLeft)
		go(i, j - 1, p);
	if (isRight)
		go(i, j + 1, p);
	Used[i][j] = 0;
}

void solveCase()
{
	int i, j;
	Ans = 0;
	initUsed();
	for (i = 0; i < N; i++){
		for (j = 0; j < M; j++){
			if (Grid[i][j] == 'H'){
				go(i, j, P);
			}
		}
	}
}
void printCase()
{
	if (Ans == 1)
		printf("#%d: Harry can leave\n", test);
	else
		printf("#%d: Harry is stuck forever\n", test);

}
int main()
{
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--)
	{
		test++;
		cin >> N >> M;
		for (int i = 0; i < N; i++){
			cin >> Grid[i];
		}
		cin >> P;
		solveCase();
		printCase();

	}
}
