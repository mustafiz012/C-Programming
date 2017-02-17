#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#define MAX_N 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N, S;
char input[101];
int Path[MAX_N][MAX_N];
int visited[MAX_N];

void initPath(){
	int x, y;
	for (x = 1; x <= N; x++)
		for (y = 1; y <= N; y++)
			Path[x][y] = 0;
}
void initVisited(){
	for (int i = 1; i <= N; i++)
		visited[i] = 0;
}
void inputt(){
	int x, y;
	char ch;
	while (1 == scanf("%d", &x)){
		if (0 == x)
			return;
		while (2 == scanf("%d%c", &y, &ch)){
			Path[x][y] = Path[y][x] = 1;
			if ('\n' == ch)
				break;
		}
	}
}

void fill(int x){
	int y;
	visited[x] = 1;
	for (y = 1; y <= N; y++)if (Path[x][y] && 0 == visited[y])
		fill(y);
}
int checkingCritical(int x){
	int y;
	initVisited();
	visited[x] = 1;
	for (y = 1; y <= N; y++)if (Path[x][y]){
		fill(y);
		break;
	}
	for (y = 1; y <= N; y++)if (Path[x][y] && 0 == visited[y])
		return 1;
	return 0;
}
void printVisited(){
	int x;
	for (x = 1; x <= N; x++)if (visited[x])
		printf("%d ", x);
	cout << endl;
}
void calculation(){
	int x;
	for (x = 1; x <= N; x++)if (checkingCritical(x))
	{
		printf("%d ", x);
		Ans++;
	}
	cout << endl;
}

void output(){
	int x, y;
	for (x = 1; x <= N; x++)
	{
		for (y = 1; y <= N; y++)
			cout << Path[x][y] << " ";
		cout << endl;
	}

}

int main(){
	//cin >> T;
	//freopen("input.txt", "r", stdin);
	while (scanf("%d", &N)){
		if (N == 0)
			break;
		initPath();
		inputt();
		//initVisited();
		Ans = 0;
		//fill(5);
		calculation();
		printf("%d\n", Ans);
		//printVisited();
		//output();
	}
	return 0;
}