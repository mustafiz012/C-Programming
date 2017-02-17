#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define SIZE 101
int N;
int Bin[SIZE];

void printBinary(){
	int i;
	for (i = 0; i < N; i++)
		printf("%d", Bin[i]);
	printf("\n");
}

void solve(int i){
	int j;
	if (i == N){
		printBinary();
		return;
	}
	/*
	
	Bin[i] = 0;
	solve(i + 1);
	Bin[i] = 1;
	solve(i + 1);
	
	*/

	for (j = 0; j < 2; j++){
		Bin[i] = j;
		solve(i + 1);
	}
}

int main(){
	return 0;
}