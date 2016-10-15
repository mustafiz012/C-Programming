#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T;
#define SIZE 1000
#define add(a, b) a+b
#define subtract(a, b) a-b

char grid[SIZE], tempGrid[SIZE];

void readCase() {
	scanf("%[^\n]", grid);
	//gets_s(grid);
	//scanf("%s", grid);
}

void solveCase() {
	int size_grid = 0;
	for (int i = 0; grid[i] != '\0'; i++) {
		//printf("%c", grid[i]);
		size_grid++;
	}
	printf("\n%d\n", size_grid);
	int jj = 0;
	for (int i = size_grid + 1; i >= 0; i--)
	{
		tempGrid[jj] = grid[i];
		jj++;
	}
	cin >> T;
	printf("%s\n", tempGrid);
	cout << endl;
}

void printCase() {
	//printf("%s\n", grid);
}

int main() {
	//freopen("input.txt", "r", stdin);
	//cin >> T;
	//T = 2;
		readCase();
		solveCase();
		printCase();
	return 0;
}