#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N, box[3001], capacity[3001];
int counter = 0;

void readCase(){
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> box[i] >> capacity[i];
}
void solve(int b, int cc, int c){
	if (cc>Ans)
		Ans = cc;
	if (b == N)
		return;
	int i;
	for (i = b + 1; i < N; i++){
		if (box[i] <= c)
		{
			if (c - box[i]<capacity[i])
				solve(i, cc + 1, c - box[i]);
			else solve(i, cc + 1, capacity[i]);
		}
	}

}
void solveCase(){
	Ans = 0;
	for (int i = 0; i<N; i++)
		solve(i, 1, capacity[i]);
}

void printCase(){
	printf("%d\n", Ans);
}

int main(){
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}