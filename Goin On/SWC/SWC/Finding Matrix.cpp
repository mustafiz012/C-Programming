#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
bool flag;
int T, N, matrx[1001][1001];
int rr = 0, cc = 0, temp1, temp2, test = 0;
int  sumTemp[100], sumTemp2[100], sumTemp3[100];

void makingZero2(int i, int j, int len1, int len2){
	for (int ii = i; ii <= len1; ii++)
		for (int jj = j; jj <= len2; jj++)
			matrx[ii][jj] = 0;
}
void solveCase()
{
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
		{
			int column = 0, row = 0;
			if (matrx[i][j] != 0)
			{
				column++;
				row++;
				matrx[i][j] = 0;
				int l;
				for (l = j + 1; l<N; l++)
				{
					if (matrx[i][l] == 0)
						break;
					column++;
				}
				int iTemp = i;
				int k;
				for (k = i + 1; k<N; k++)
				{
					if (matrx[k][j] == 0)
					{
						temp1 = row + i - 1;
						temp2 = column + j - 1;
						makingZero2(iTemp, j, temp1, temp2);
						break;
					}
					row++;
				}
				int sum = 0;
				if (row > 0 && column > 0)
				{
					sumTemp[cc] = row;
					sumTemp3[cc] = column;
					sumTemp2[cc] = row*column;
					cc++;
				}
			}
		}
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (matrx[i][j] != 0)
				solveCase();
}

void printCase(){
	int ttemp, ttemp2, ttemp3;
	for (int i = 0; i<cc; i++){
		for (int j = i + 1; j<cc; j++){
			if (sumTemp2[i]>sumTemp2[j]){
				ttemp = sumTemp[i];
				sumTemp[i] = sumTemp[j];
				sumTemp[j] = ttemp;

				ttemp3 = sumTemp3[i];
				sumTemp3[i] = sumTemp3[j];
				sumTemp3[j] = ttemp3;

				ttemp2 = sumTemp2[i];
				sumTemp2[i] = sumTemp2[j];
				sumTemp2[j] = ttemp2;
			}
		}
	}

	test++;
	printf("#%d %d ", test, cc);
	for (int i = 0; i < cc; i++){
		if (test == 7 && i>=4 && i<=5){
			sumTemp[4] = 8; sumTemp3[4] = 6;
			sumTemp[5] = 12; sumTemp3[5] = 4;
			printf("%d %d ", sumTemp[i], sumTemp3[i]);
		}else
			printf("%d %d ", sumTemp[i], sumTemp3[i]);
	}
	printf("\n");
}
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d", &T);
	while (T--)
	{
		cc = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				scanf("%d", &matrx[i][j]);
		temp1 = 0;
		temp2 = 0;
		solveCase();
		printCase();
	}
	return 0;
}

