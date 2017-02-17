#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<stdio.h>
using namespace std;
int done[SIZE], BinPerm[SIZE];
int N, k, T;
void generateBinPerm(int node){
	k = 0;
	if (node == N){
		for (int i = 0; i < N; i++)
			//printf("%d", BinPerm[i]);
		//cout << endl;
		return;
	}
	for (int j = 0; j < N; j++) if(done[j]==0){
		BinPerm[node] = k;
		done[j] = 1;
		generateBinPerm(node + 1);
		done[j] = 0;
		k = 1;
	}
}
int main()
{
	cin >> T;
	while (T--){
		cin >> N;
		for (int i = 0; i < N; i++)
			done[i] = 0;
		generateBinPerm(0);
	}
	return 0;
}