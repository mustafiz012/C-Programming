#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

int T, Ans, M, N;
char grid[101][101];

void readCase(){
	cin >> M >> N;
	if (M == 0)
		return;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			cin >> grid[i][j];
}
void solve(int i, int j){
	for (int k = i; k < M-1; k++){
		for (int l = j; l < N-1; l++){
			if (grid[k][l + 1] == '@')
			{
				//printf("%d %d %c\n", k, l + 1, grid[k][l + 1]);
				solve(k, l + 1);
			}
			if (grid[k + 1][l - 1] == '@')
			{
				//printf("%d %d %c\n", k+1, l - 1, grid[k+1][l - 1]);
				solve(k + 1, l - 1);
			}
			if (grid[k + 1][l] == '@')
			{
				//printf("%d %d %c\n", k + 1, l, grid[k + 1][l]);
				solve(k + 1, l);
			}
			if (grid[k + 1][l + 1] == '@')
			{
				//printf("%d %d %c\n", k + 1, l + 1, grid[k + 1][l + 1]);
				solve(k + 1, l + 1);
			}
		}
	}
}
void solveCase(){
	Ans = 0;
	for (int i = 0; i < M; i++){
		for (int j = 0; j < N; j++){
			if (grid[i][j] == '@'){
				Ans++;
				solve(i, j);
			}
		}
	}
}

void printCase(){
	printf("%d\n", Ans);
}

int main(){
	while (1){
		freopen("input.txt", "r", stdin);
		readCase();
		if (M == 0)
			break;
		solveCase();
		printCase();
	}
	return 0;
}