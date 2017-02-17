#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;
int test_case, Ans, sum;
int T, N, Used[9], K;
int perm[9];
int inflate[9];
int deflate[9];
int flagg;
int minn;
int inflatePerm[9];
int deflatePerm[9];
void InitUsed(){
	for (int i = 1; i <= N; i++)
		Used[i] = 0;
}
void readCase(){
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		cin >> inflate[i];
	for (int i = 1; i <= N; i++)
		cin >> deflate[i];
}
void print(){
	for (int i = 1; i <= N; i++){
		inflatePerm[perm[i]] = inflate[i];
		deflatePerm[perm[i]] = deflate[i];
		//printf("%d", perm[i]);
	}
	/*
	for (int i = 1; i <= N; i++){
	printf("%d ", inflatePerm[i]);
	}
	printf("\n\n");

	for (int i = 1; i <= N; i++)
	printf("%d ", deflatePerm[i]);
	printf("\n");
	*/
	sum = 0;
	for (int i = 0; i <= K; i++){
		sum = i;
		flagg = 0;
		for (int j = 1; j <= N; j++){
			sum += inflatePerm[j];
			if (sum > K)
			{
				flagg = 1;
				break;
			}
			sum -= deflatePerm[j];
			if (sum < 0)
			{
				flagg = 1;
				break;
			}
		}
		if (flagg == 0){
			if (i < minn){
				minn = i;
				break;
			}
		}
	}

}
void solve(int i){
	if (i == N+1){
		print();
		return;
	}
	for (int j = 1; j <= N; j++)if(0==Used[j]){
		Used[j] = 1;
		perm[i] = j;
		solve(i + 1);
		Used[j] = 0;
	}
}
void solveCase(){
	Ans = 0;
	solve(1);

}

void printCase(){
	if (minn==99999)
		Ans = -1;
	else Ans = minn;
	cout << "#" << test_case <<" " <<Ans<< endl;
}
int main()
{

	freopen("sample_input.txt", "r", stdin);
	cin >> T;
	for (test_case = 1; test_case <= T; test_case++)
	{
		readCase();
		minn = 99999;
		solveCase();
		printCase();
	}

	return 0;
}
