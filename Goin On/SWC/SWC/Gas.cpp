#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
#define SIZE 12
int T, Case, N, Car[SIZE];
int Bin[SIZE];

void readCase(){

	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", Car[i]);
}

void print(){
	int i;
	for (i = 0; i < N; i++)
		printf("%d", Bin[i]);
	printf("\n");
}

void solve(int i){
	int j;
	if (i == N){
		print();
		return;
	}
	/*
	Bin[i] = 0;
	solve(i + 1);
	Bin[i] = 1;
	solve(i + 1);
	*/
	for (j = 0; j < N; j++){
		Bin[i] = j;
		solve(i + 1);
	}
}

void solveCase(){
	solve(0);
}

void printCase(){

}

int main(){
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}