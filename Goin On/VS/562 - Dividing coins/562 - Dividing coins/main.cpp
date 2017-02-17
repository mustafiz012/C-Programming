#include<iostream>
#include<stdio.h>
using namespace std;
#define SIZE 101
#define SIZE2 50001
int N;
int M;
int coins[SIZE];

void readCase(){
	int i;
	cin >> M;
	for (i = 0; i < M; i++){
		//scanf("%d", &coins);
		cin >> coins[i];
	}
}
int Total;
int A[SIZE];

int abs(int n){
	if (n < 0)
		return -n;
	else
		return n;
}
void print(){
	int i, sum1, sum2;
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < M; i++){
		sum1 += coins[i];
	}
	sum2 += Total - sum1;
	printf("%d %d\n", sum1, sum2);
}
void solve1(int i){
	if (i == M){
		print();
		return;
	}
	A[i] = 0;
	solve1(i + 1);
	A[i] = 1;
	solve1(i + 1);
}

int solve(int i, int sum1){
	int sum2, left, right;
	if (i == M){
		sum2 = Total - sum1;
		return Dp[i][sum1] = abs(sum1 - sum2);
	}
	left = solve(i + 1, sum1);
	right = solve(i + 1, sum1+coins[i]);
	if (left < right)
		return Dp[i][sum1] = left;
	else
		return Dp[i][sum1] = right;
}

int Dp[SIZE][SIZE2];
void initDp(){
	int i, j;
	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE2; j++){
			Dp[i][j] = -1;
		}
}

int Ans;

void solveCase(){
	int i;
	Total = 0;
	for (i = 0; i < M; i++){
		Total += coins[i];
		Ans = solve2(0, 0);
	}
}

void printCase(){
	printf("%d", Ans);
}

int main(){
	int T; 
	//freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}