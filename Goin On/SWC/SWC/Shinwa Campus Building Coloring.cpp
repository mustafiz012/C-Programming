#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N, M;
char grid[50][50];

void readCase(){
	for (int i = 0; i < N; i++)
		cin >> grid[i];
}

void solveCase(){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (grid[i][j] == grid[i][j + 1] && j + 1 <= M - 1){
				j++;
			}
		}
	}
}

void printCase(){

}

int main(){
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}