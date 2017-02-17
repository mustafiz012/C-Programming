//let's go to AmiyaKhum (DFS)

#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, shortestPath, N, M, HNR, index, NH, HI, tempCounter;
int s1, s2, d1, d2;
int grid[1000][1000];
void readCase(){
	cin >> HNR;
	for (int i = 0; i < HNR; i++){
		cin >> index >> NH >> HI;
		grid[index][HI] = 1;
	}
	cin >> s1 >> s2 >> d1 >> d2;
}
void Used(){
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			grid[i][j] = 0;
}
void findShorter(int i, int j, int counter){
	
	if (i == d1 && j == d2)
	{
		if (counter < shortestPath)
			shortestPath = counter;
		return;
	}

	if (i - 1 >= 0 && grid[i - 1][j] == 0){
		grid[i - 1][j] = 1;
		findShorter(i - 1, j, counter+1);
		grid[i - 1][j] = 0;
	}
		if (i + 1 <= N - 1 && grid[i + 1][j] == 0){
		grid[i + 1][j] = 1;
		findShorter(i + 1, j, counter + 1);
		grid[i + 1][j] = 0;
	}
	if (j - 1 >= 0 && grid[i][j - 1] == 0){
		grid[i][j - 1] = 1;
		findShorter(i, j - 1, counter + 1);
		grid[i][j - 1] = 0;
	}
	 if (j + 1 <= N-1 && grid[i][j + 1] == 0){
		grid[i][j + 1] = 1;
		findShorter(i, j + 1, counter + 1);
		grid[i][j + 1] = 0;
	}

	//printf("temp: %d\n", tempCounter);
}
void solveCase(){
		Used();
		findShorter(s1, s2, 0);
}

void printCase(){
	printf("%d\n", shortestPath);
}

int main(){
	freopen("input.txt", "r", stdin);
	while (scanf("%d%d", &N, &M)==2){
		if (N == 0)
			break;
		shortestPath = 1000000;
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}