#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#define SIZE 10
int N, permu[SIZE], A[SIZE], yo, test = 0;
void readCase(){
	cin >> N;
}
int Used[SIZE], Used2[SIZE];

void initUsed(){
	for (int i = 1; i <= N; i++)
	{
		Used[i] = 0;
	}
}
void print(){
	for (int i = 1; i <= N; i++)
	{
		printf("%d", A[i]);
	}
	printf("\n");
}
void solve(int i){
	int j;
	if (i == N+1){
		//print();
		yo++;
		return;
	}
	for (j = 1; j <= N; j++) if (0 == Used[j] && i!=j){
		Used[j] = 1;
		A[i] = j;
		solve(i + 1);
		Used[j] = 0;
	}
}

void solveCase(){
	yo = 0;
	initUsed();
	solve(1);
}

void printCase(){
	printf("#%d %d\n",test, yo);
}
int main(){
	int T;
	//freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		test++;
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}