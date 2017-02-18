#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<cstdio>
using namespace std;
int T, N, grid[SIZE][SIZE], gridVisited[SIZE][SIZE];
void initGrid() {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			gridVisited[i][j] = -1;
}
void oning(int j, int i) {
	for (int ii = N - 1; ii > i; ii--) {
		if (grid[ii][j] == 0)
		{
			grid[i][j] = 0;
			grid[ii][j] = 1;
			break;
		}
	}
}
void bombing() {
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N; i++)if (-1 == gridVisited[j][i]) {
			if (grid[i][j] == 1) {
				gridVisited[j][i] = -2;
				oning(j, i);
			}
		}

	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> T;
	while (T--) {
		cin >> N;
		initGrid();
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> grid[i][j];
		bombing();
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
				cout << grid[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}