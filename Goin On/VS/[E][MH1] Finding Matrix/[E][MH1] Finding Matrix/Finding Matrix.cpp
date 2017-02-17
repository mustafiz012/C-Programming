#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

int T, N, matrx[101][101];

void solveCase(){
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			int column = 0, row = 0;
			if (matrx[i][j] != 0){
				column++;
				row++;
				matrx[i][j] = 0;
				int l;
				for (l = j+1; l<N; l++){
					if (matrx[i][l] == 0)
						break;
					column++;
					matrx[i][l] = 0;
				}
				for (int k = i+1; k<N; k++){
					if (matrx[k][j] == 0)
					{
						i = k;
						break;
					}
					row++;
					matrx[k][j] = 0;
				}

			}
			if (row != 0 && column != 0){
				printf("%d %d\n", row, column);
			}
		}
}
int main(){
	freopen("input.txt", "r", stdin);
	scanf("%d", &T);
	while (T--){
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				scanf("%d", &matrx[i][j]);
		solveCase();
	}
	return 0;
}

