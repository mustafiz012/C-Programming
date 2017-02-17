#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N, M;
int edges[30][30];
int maxPathLen;
void readCase(){
	for (int i = 0; i < M; i++){
		int x, y;
		cin >> x >> y;
		edges[x][y] = 1;
		edges[y][x] = 1;
	}
}
void Used(){
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			edges[i][j] = 0;
}

void solveDFS(int index, int len){
	if (len > maxPathLen)
		maxPathLen = len;
	for (int i = 0; i < N; i++){
		if (edges[index][i] == 1){
			edges[index][i] = 0;
			edges[i][index] = 0;
			solveDFS(i, len + 1);
			edges[index][i] = 1;
			edges[i][index] = 1;
		}
	}
}
void solveCase(){
	for (int i = 0; i < N; i++)
		solveDFS(i, 0);
}

void printCase(){
	printf("%d\n", maxPathLen);
}

int main(){
	freopen("input.txt", "r", stdin);
	while (1){
		cin >> N >> M;
		if (N == 0)
			break;
		maxPathLen = -1;
		Used();
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}