#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
int T;
#define SIZE 101
int X;
int Y;
int N;
int Bin[SIZE];
int Used[SIZE];
int arr[SIZE];
using namespace std;
int abss(int i, int j){
	if (i > j)
		return i - j;
	else
		return j - i;
}
void printBinary()
{
	int i, sum = 0;
	for (i = 0; i < X; i++)
	{
		printf("%d", arr[Bin[i]]);
	}
	printf("\n");
	for (i = 1; i < X; i++)
		sum += abss(arr[Bin[i]], arr[Bin[i-1]]);
	sum += abss(arr[Bin[0]], 0);
	sum += abss(arr[Bin[X - 1]], 0);
	printf("%d\n", sum);
}
void solve(int i)
{
	int j;
	if (i == X)
	{
		printBinary();
		return;
	}
	for (j = 0; j < Y; j++)
	{
		if (Used[j] == 0)
		{
			Used[j] = 1;
			Bin[i] = j;
			solve(i + 1);
			Used[j] = 0;
		}
	}
}
int main()
{
	int t;
	for (t = 0; t < SIZE; t++)
		Used[t] = 0;
	cin >> Y;
	cin >> X;
	cin >> N;
	for (t = 0; t < N; t++)
		cin >> arr[t];
	solve(0);
	return 0;
}
