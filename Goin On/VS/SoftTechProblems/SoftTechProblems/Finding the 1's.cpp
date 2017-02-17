#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
bool flag;
int T, N;
char matrx[1001][1001];
int rr = 0, cc = 0, temp1, temp2, test = 0;
int  sumTemp[100], sumTemp2[100], sumTemp3[100];
int rowAns, columnAns;

void makingZero2(int i, int j, int len1, int len2){
	for (int ii = i; ii <= len1; ii++)
		for (int jj = j; jj <= len2; jj++)
			matrx[ii][jj] = '0';
}
void solveCase()
{
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
		{
			int column = 0, row = 0;
			if (matrx[i][j] == '1')
			{
				column++;
				row++;
				matrx[i][j] = '0';
				int l;
				for (l = j + 1; l<N; l++)
				{
					if (matrx[i][l] == '0')
						break;
					column++;
				}
				int iTemp = i;
				int k;
				for (k = i + 1; k<N; k++)
				{
					if (matrx[k][j] == '0')
					{
						temp1 = row + i - 1;
						temp2 = column + j - 1;
						makingZero2(iTemp, j, temp1, temp2);
						break;
					}
					row++;
				}
				//printf("OKA: %d %d\n", row, column);
				if (row ==column)
				{
					
					if (columnAns < row)
					{
						//printf("ok%d\n", row);
						columnAns = row;
					}
				}
			}
		}
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (matrx[i][j] != '0')
				solveCase();
}

void printCase(){
	printf("%d\n", columnAns*columnAns);
}
int main()
{
	freopen("input.txt", "r", stdin);
	while (1)
	{
		scanf("%d ", &N);
		if (N == 0)
			break;
		cc = 0;
		columnAns = 0;
		for (int i = 0; i < N; i++)
			gets(matrx[i]);
		temp1 = 0;
		temp2 = 0;
		solveCase();
		printCase();
	}
	return 0;
}

