//solid permutation

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<stdio.h>
using namespace std;
int T, N;
int permNumber[SIZE], done[SIZE];
void generatePerm(int i){
	if (i==N)
	{
		for (int m = 0; m < N; m++)
			printf("%d", permNumber[m]);
		cout << endl;
		return;
	}
	for (int j = 1; j <= N; j++)if(done[j]==0){
		permNumber[i] = j;
		done[j] = 1;
		generatePerm(i + 1);
		done[j] = 0;
	}
}
int main()
{
	cin >> T;
	while (T--){
		cin >> N;
		for (int i = 0; i < N; i++)
			done[i] = 0;
		generatePerm(0);
	}
	return 0;
}