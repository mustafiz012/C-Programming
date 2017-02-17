#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int T, N, input[101], input2[101];
	cin >> T;
	while (T--){
		cin >> N;
		int sum1 = 0, sum2 =0;
		for (int i = 0; i < N; i++)
			cin >> input[i];


		for (int i = 0; i<N; i++){
			for (int j = i + 1; j<N; j++){
				if (input[i]>input[j]){
					int temp;
					temp = input[i];
					input[i] = input[j];
					input[j] = temp;
				}
			}
		}

		int jj = 0;
		for (int j = N - 1; j >= 0; j--){
			input2[jj] = input[j];
			jj++;
		}
		int mid;
		if (N % 2 == 0)
			mid = N / 2;
		else
			mid = (N / 2) + 1;
		for (int i = 0; i < mid; i++){
			if (i < (mid / 2))
				sum1 += (input[i] + input2[i]);
			else
				sum2 += (input[i] + input2[i]);
		}

		if (sum1>sum2)
			printf("%d\n", sum1 - sum2);
		else printf("%d\n", sum2 - sum1);
	}
	return 0;
}