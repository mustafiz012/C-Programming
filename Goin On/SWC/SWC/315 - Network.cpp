//uva 315 - Network

#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N, S;
int graph[SIZE][SIZE], done[SIZE];

void input(){
	while (scanf("%d", &S)){
		char ch;
		int c;
		if (0 == S)
			break;
		while (scanf("%d%c", &c, &ch)){
			graph[S][c] = graph[c][S] = 1;
			if ('\n' == ch)
				break;
		}
	}
}

void initDone(){
	for (int i = 1; i <= N;i++)
		done[i] = 0;
}

void filling(int x){
	done[x] = 1;
	for (int y = 1; y <= N; y++)if (graph[x][y] && 0 == done[y])
		filling(y);
}

bool checkingCriticalPoints(int x){
	initDone();
	done[x] = 1;
	for (int y = 1; y <= N; y++)if (graph[x][y])
	{
		filling(y);
		break;
	}
	for (int y = 1; y <= N; y++)if (0 == done[y] && graph[x][y])
		return true;
	return false;
}

void calculation(){
	for (int x = 1; x <= N; x++)if (checkingCriticalPoints(x))
		Ans++;
}

int main(){
	//freopen("input.txt", "r", stdin);
	while (scanf("%d", &N)){
		if (0 == N)
			break;
		Ans = 0;
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				graph[i][j] = 0;
		input();
		calculation();
		printf("%d\n", Ans);
	}
	return 0;
}