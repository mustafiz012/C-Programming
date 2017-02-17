#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans;
int N, M;
bool truefalse;
int pre[SIZE], post[SIZE], donePre[SIZE], donePost[SIZE];
void input(){
	for (int i = 0; i < M; i++)
	{
		scanf("%d%d", &pre[i], &post[i]);
		donePre[i] = 0;
		donePost[i] = 0;
	}
}
bool NoMatch(int indexx){
	truefalse = false;
	for (int i = 0; i < M; i++)if (donePre[i] == 0 || donePost[i] == 0) {
		if (pre[0] == post[i]){
			truefalse = true;
			break;
		}
	}
	if (truefalse)
		return false;
	else
		return true;
}
void calculation(int index){
	if (NoMatch(index))
	{
		printf("%d ", pre[index]);
		return;
	}
}

void output(){
	//for (int i = 0; i < M; i++)
		//printf("%d %d\n", pre[i], post[i]);
}

int main(){
	//cin >> T;
	freopen("input.txt", "r", stdin);
	while (scanf("%d%d", &N, &M) == 2) {
		if (N == 0 && M == 0)
			break;
		input();
		calculation(0);
		output();
	}
	return 0;
}