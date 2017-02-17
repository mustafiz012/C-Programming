#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<stdio.h>
using namespace std;
int T, M, coins[SIZE];
int sum1, sum2;
int main()
{
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		cin >> M;
		for (int i = 0; i < M; i++)
			cin >> coins[i];
		for (int i = 0; i < M; i++){
			int temp;
			for (int j = i+1; j < M; j++){
				if (coins[i] > coins[j]){
					temp = coins[i];
					coins[i] = coins[j];
					coins[j] = temp;
				}
			}
		}
		sum1 = 0;
		sum2 = coins[M - 1];
		for (int i = M - 2; i >= 0;i--){
			if (sum1 < sum2)
				sum1 += coins[i];
			else
				sum2 += coins[i];
		}
		if (sum1 > sum2)
			printf("%d\n", sum1 - sum2);
		else printf("%d\n", sum2 - sum1);
	}
	return 0;
}