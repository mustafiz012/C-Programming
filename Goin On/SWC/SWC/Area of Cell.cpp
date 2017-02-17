#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N;
char grid[101][101], str[101];

void readCase(){
	printf("ok\n");
	N = 0;
	gets(grid[1]);
	for (int i = 0; grid[1][i] != '\0'; i++)
	{
		printf("ok\n");
		N++;
	}
	for (int i = 2; i <= N; i++){
		gets(grid[i]);
	}

	for (int i = 1; i <= N; i++){
		printf("ok\n");
		cout<<grid[i]<<endl;
	}

	
}

void solveCase(){

}

void printCase(){

}

int main(){
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}