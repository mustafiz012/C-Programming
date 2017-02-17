#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, N, E;
int edges[101][101];
void visited(){
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			edges[i][j] = 0;
}
void readCase(){
	for (int i = 0; i < E; i++){
		int x, y;
		cin >> x >> y;
		edges[x][y] = 1;
		//edges[y][x] = 1;
	}
}

void solveCase(){
	for (int i = 0; i < N; i++){
		printf("%d-->", i);
		int counter = 0;
		for (int j = 0; j < N; j++){
			
			if (edges[i][j] == 1)
			{
				counter++;
				printf("%d ", j);
			}
		}cout <<"("<<counter <<")"<<endl;
		
	}
}

void printCase(){

}

int main(){
	//freopen("input.txt", "r", stdin);
	while (1){
		cin >> N >> E;
		if (N == 0)
			break;
		visited();
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}