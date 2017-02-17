#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<cstdio>
#include<iostream>
using namespace std;
int T, N, input[SIZE], done[SIZE], perm[SIZE], counter, counterSum; 

void calculation(int val){
	counter++;
	if (val == N){
		for (int i = 0; i < N; i++)
			printf("%d ", perm[i]);
		cout << endl;
		return;
	}
	for (int i = 0; i < N; i++)if (0 == done[i]){
		done[i] = 1;
		perm[val] = input[i];
		calculation(val + 1);
		
		done[i] = 0;
	}
}
int main()
{
	cin >> T;
	while (T--){
		cin >> N;
		counter = 0;
		counterSum = 0;
		for (int i = 0; i < N; i++)
			cin >> input[i];
		for (int i = 0; i < N; i++)
			done[i] = 0;
		calculation(0);
		if (counterSum < counter){
			counterSum = counter;
		}
	}
	return 0;
}