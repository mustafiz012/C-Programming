#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#define SIZE 10
int N, permu[SIZE];
void readCase(){
	cin >> N;
}
int Used[SIZE];

void initUsed(){
	for (int i = 0; i < N; i++)
		Used[i] = 0;
}
void print(){
	for (int i = 0; i < N; i++)
		printf("%d", permu[i]);
	printf("\n");
}
int solve(int i){
	int j, k;
	k = 0;
	if (i == N){
		print();
		return 0;
	}
	for (j = 0; j < N; j++) if (0 == Used[j]){
		Used[j] = 1;
		permu[i] = k;
		solve(i + 1);
		k = 1;
		Used[j] = 0;
	}
}

void solveCase(){
	initUsed();
	solve(0);
}

void printCase(){

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