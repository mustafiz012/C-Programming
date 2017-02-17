#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#define SIZE 10
int N, combi[SIZE], A[SIZE];
void readCase(){
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> combi[i];
}

void print(){
	for (int i = 0; i < N; i++)
		printf("%d", A[i]);
	printf("\n");
}
int solve(int i){
	int j;
	if (i == N){
		print();
		return 0;
	}
	for (j = 0; j < N; j++){
		A[i] = combi[j];
		solve(i + 1);
	}
}

void solveCase(){
	solve(0);
}

void printCase(){

}
int main(){
	int T;
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}