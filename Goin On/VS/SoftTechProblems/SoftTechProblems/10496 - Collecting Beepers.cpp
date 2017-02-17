#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

#define SIZE 12
int T, XSize, YSize, N, StartX, StartY, A[SIZE], test, totalSum;
int twoNum[2], NNumber[2];
int Xpos[SIZE], Ypos[SIZE];

int abss(int i, int j){
	if (i > j)
		return i - j;
	else
		return j - i;
}
void readCase(){
	cin >> XSize >> YSize;
	cin >> StartX >> StartY;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin>> Xpos[i] >> Ypos[i];
}
void print(){
	int i, sum = 0;
	for (i = 1; i < N; i++)
	{
		sum += abss(Xpos[A[i]], Xpos[A[i-1]]) + abss(Ypos[A[i]], Ypos[A[i-1]]);
		//printf("(%d %d )", Xpos[A[i]], Ypos[A[i]]);
	}
	sum += abss(Xpos[A[0]], StartX) + abss(Ypos[A[0]], StartY);
	sum += abss(Xpos[A[N - 1]], StartX) + abss(Ypos[A[N - 1]], StartY);
	//printf("==> %d\n", sum);
	if (totalSum > sum)
		totalSum = sum;
}
void printCase()
{
	printf("The shortest path has length %d\n", totalSum);
}

int Used[SIZE];
void initUsed(){
	int i;
	for (i = 0; i < N; i++){
		Used[0] = 0;

	}
}
void solve(int i)
{
	int j;
	if (i == N){
		print();
		return;
	}
	for (j = 0; j < N; j++) if (0 == Used[j]){
		Used[j] = 1;
		A[i] = j;
		solve(i + 1);
		Used[j] = 0;
	}
}

void solveCase(){
	solve(0);
}
int main()
{
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		totalSum = 99999;
		readCase();
		solveCase();
		printCase();
	}
	
	return 0;
}
