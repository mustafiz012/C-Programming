#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, M, N, patternIndex, patIndex;
char Ans[8][5];
char grid[9][9];
char pattern[9] = "@IEHOVA#";
void readCase(){
	cin >> M >> N;
	for (int i = 0; i < M; i++)
		scanf("%s", grid[i]);
}
void strcopy(char ch[5]){
	for (int i = 0; ch[i] != '\0'; i++){
		Ans[patIndex][i] = ch[i];
	}
	patIndex++;
}
void solve(int patternIn, int i, int j){
		if (grid[i][j - 1] == pattern[patternIn]){
			cout << "left ";
			//strcopy("left");
			patternIndex++;
			return;
		}
		else if (grid[i][j + 1] == pattern[patternIn]){
			cout << "right ";
			//strcopy("right");
			patternIndex++;
			return;
		}
		else if (grid[i - 1][j] == pattern[patternIn]){
			cout << "forth ";
			//strcopy("forth");
			patternIndex++;
			return;
		}
}
void solveCase(){
	int counter = 0;
	patternIndex = 0;
	patIndex = 0;
	for (int i = M - 1; i >= 0; i--){
		for (int j = N - 1; j >= 0; j--){
			if (grid[i][j] == pattern[patternIndex] && counter<7){
				counter++;
				solve(patternIndex+1, i, j);
				if (pattern[patternIndex - 1] == '#')
					return;
				else {
					i = M - 1;
					j = N - 1;
				}
			}
		}
	}
	
}
void printCase(){
	for (int i = 0; i<7; i++)
		printf("%s ", Ans[i]);
	//printf("\n");
}
int main(){
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		//printCase();
		printf("\n");
	}
	return 0;
}