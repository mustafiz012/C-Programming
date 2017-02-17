#define _CRT_SECURE_NO_WARNINGS
#define SIZE 1001
#include<stdio.h>
#include<iostream>
using namespace std;

int T, Ans, R, C, r, c;
int Gi, Gj;
int flag, flag2;

char gridMaster[SIZE][SIZE];
char gridServant[SIZE][SIZE];

void readCase(){
	printf("ya\n");
	cin >> R >> C;
	for (int i = 0; i < R; i++)
		scanf("%s", gridMaster[i]);
	cin >> r >> c;
	for (int i = 0; i < r; i++)
		scanf("%s", gridServant[i]);
}
bool matchGrid(int i, int j){
	flag = true;
	for (int ii = 0; ii < r; ii++){
		for (int jj = 0; jj < c; jj++){
			if (gridMaster[ii+i][jj+j] != gridServant[ii][jj]){
				flag = false;
				return flag;
			}
		}
	}
	return flag;
}
void solveCase(){
	printf("ya\n");
	flag2 = false;
	int jj = 0;
	for (int i = 0; i<R; i++)
		for (int j =0; j<C; j++)
			if (gridServant[0][0] == gridMaster[i][j]){
				if (matchGrid(i, j))
				{
					printf("yy\n");
					flag2 = true;
					return;
				}
			}
}

void printCase(){
	printf("ya\n");
	if (flag2 == true)
		printf("YES\n");
	else printf("NO\n");
}

int main(){
	cin >> T;
	printf("ya\n");
	while (T--){
		freopen("input.txt", "r", stdin);
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}