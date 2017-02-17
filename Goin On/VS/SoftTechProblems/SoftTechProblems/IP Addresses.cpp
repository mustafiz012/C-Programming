#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

#define SIZE 12
int T, N, counter, test =0;
int Digits[SIZE], A[SIZE], B[SIZE];

void readCase()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Digits[i];
}

int individualNum(int zro, int n){
	int i, value =0;
	if ((n - zro)>1 && 0 == A[zro])
		return 0;
	for (i = zro; i < n; i++)
		value = value * 10 + A[i];
	if (value <= 255)
		return 1;
	else
		return 0;
}
int checkIP(int n, int n1, int n2, int n3){
	if (0 == individualNum(0, n1))
		return 0;
	if (0 == individualNum(n1, n2))
		return 0;
	if (0 == individualNum(n2, n3))
		return 0;
	if (0 == individualNum(n3, n))
		return 0;
	return 1;
}
/*

void printIP(int n, int n1, int n2, int n3){
	int j;
	for (j = 0; j < n1; j++)
		printf("%d", A[j]);
	printf(".");
	for (j = n1; j < n2;j++)
		printf("%d", A[j]);
	printf(".");

	for (j = n2; j < n3; j++)
		printf("%d", A[j]);
	printf(".");

	for (j = n3; j < n; j++)
		printf("%d", A[j]);
	if (checkIP(n, n1, n2, n3))
		printf("\nValid:\n");
	else
		printf("\nInvalid:\n");
}

*/

void creatIP(int n){
	int n1, n2, n3;
	for (n1 = 1; n1 < n - 2; n1++)
		for (n2 = n1 + 1; n2 < n - 1; n2++)
			for (n3 = n2 + 1; n3 < n; n3++)
				if (checkIP(n, n1, n2, n3))
					counter++;
				//printIP(n, n1, n2, n3);
}

/*

void print(int n)
{
	creatIP(n);
}

*/

void printCase()
{
	printf("Case #%d\n%d\n", test, counter);
}

int Used[SIZE];
void initUsed()
{
	int i;
	for (i = 0; i < N; i++)
		Used[i] = 0;
}

void solve(int i)
{
	int j;
	if (i == N)
	{
		int k;
		k = N;
		for (int i = N - 1; i >= 0; i--)
		{
			A[k] = A[i];
			k++;
		}
		creatIP(2*N);
		for (int i = N - 2; i >= 0; i--){
			A[2*N-i-2] = A[i];
		}
		creatIP((2 * N) - 1);
		return;
	}
	for (j = 0; j < N; j++) if (0 == Used[j])
	{
		Used[j] = 1;
		A[i] = Digits[j];
		//B[i] = Digits[j];
		solve(i + 1);
		Used[j] = 0;
	}
}

void solveCase()
{
	solve(0);
}
int main()
{
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--)
	{
		test++;
		counter = 0;
		readCase();
		solveCase();
		printCase();
	}

	return 0;
}
