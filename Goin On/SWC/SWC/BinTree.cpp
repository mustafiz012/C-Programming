#define _CRT_SECURE_NO_WARNINGS
#define SIZE 11
#include<stdio.h>
#include<iostream>
using namespace std;
int T, N;
int BinT[SIZE];
void generateBinTree(int i){
	if (i == N){
		for (int ii = 0; ii < N; ii++)
			printf("%d", BinT[ii]);
		cout << endl;
		return;
	}
	BinT[i] = 0;
	generateBinTree(i + 1);
	BinT[i] = 1;
	generateBinTree(i+1);
}
int main()
{
	cin >> T;
	while (T--){
		cin >> N;
		generateBinTree(0);
	}
	return 0;
}