#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
#define SIZE 10
int T;
int Case;
int N;
int Car[SIZE];
int Bin[SIZE];
int Ans;

int abss(int i, int j){
	if (i > j)
		return i - j;
	else
		return j - i;
}
void readCase(){
	int i;
		cin >> N;
		for (i = 1; i <= N; i++){
			cin >> Car[i];
		}
}

void print(){
	int i;
	for (i = 1; i <= N; i++)
		printf("%d", Bin[i]);
	printf("\n");
}

int Used[SIZE];
void intUsed(){
	int i;
	for (i = 0; i < SIZE; i++){
		Used[i] = 0;
	}
}
int Path[SIZE];
void printPath(){
	int i;
	for (i = 1; i <= N; i++)
		printf("%d ", Path[i]);
	printf("\n");
}

void solve(int i, int pos, int load, int cost){
	int j;
	if (cost > Ans)
		return;
	if (i == N+1){
		//print();
		printPath();
		printf("%d\n", cost);
		if (cost < Ans){
			Ans = cost;
		}
		return;
	}
	/*
	Bin[i] = 0;
	solve(i + 1);
	Bin[i] = 1;
	solve(i + 1);
	*/
	/*
	for (j = 0; j < N; j++) if(0==Used[j]){
		Bin[i] = j;
		Used[j] = 1;
		solve(i + 1);
		Used[j] = 0;
	}
	*/
	if (0 == pos){
		for (j = 1; j <= N; j++) if(1==Car[j] && 0 == Used[j]){
			Used[j] = 1;
			Path[i] = j;
			solve(i + 1, j, load-1, cost + (j, pos));
			Used[j] = 0;
		}
		solve(i, N + 1, 2, cost + N + 1);
	}
	else if (N + 1 == pos){
		for (j = 1; j <= N; j++) if (2 == Car[j] && 0 == Used[j]){
			Used[j] = 1;
			Path[i] = j;
			solve(i + 1, j, load - 1, cost + N + abss(1, j));
			Used[j] = 0;
		}
		solve(i, 0, 2, cost + N + 1);
	}
	else if (1 == Car[pos]){
		for (j = 1; j <= N; j++) if(1==Car[j] && 0 == Used[j] && load>0){
			Used[j] = 1;
			Path[i] = j;
			solve(i + 1, j, load - 1, cost + abss(j, pos));
			Used[j] = 0;
		}
		solve(i, N + 1, 2, cost + N + 1 -pos);
		solve(i, 0, 2, cost + pos);
	}
	else{
		for (j = 1; j <= N; j++) if(2==Car[j] && 0==Used[j] && load>0){
			Used[j] = 1;
			Path[i] = j;
			solve(i + 1, j, load - 1, cost + abss(j, pos));
			Used[j] = 0;
		}
		solve(i, N + 1, 2, cost + N + 1 - pos);
		solve(i, 0, 2, cost + pos);
	}
}
void solveCase(){
	Ans = 200;
	intUsed();
	solve(1, 0, 2, 0);
}

void printCase(){
	printf("#%d %d\n", Case, Ans);
}

int main(){
	freopen("Gas Station Robot G-32.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> T;
	while (T--)
	{
		Case++;
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}