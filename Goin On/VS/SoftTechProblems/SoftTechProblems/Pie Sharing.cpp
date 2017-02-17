#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
#define SIZE 101
int test = 0;
int N, K, counter;
int Used[SIZE], perm[SIZE], numbers[SIZE];
string temp;
void initUsed(){
	for (int i = 0; i < K; i++)
		Used[i] = 0;
}

bool checkAcceptance(int arr[]){
	int sum = 0;
	bool flag1 = false;
	for (int i = 0; i<K; i++)
		sum += arr[i];
	for (int i = 0; i<(K-1); i++) if(sum==N){
		for (int j = 1; j < K; j++){
			if (arr[i] > arr[j])
			{
				flag1 = false;
				break;
			}
			else flag1 = true;
		}
	}
	if (flag1 == true)
	{
		printf("Yes\n");
		return true;
	}
	else
	{
		printf("No\n");
		return false;
	}
}


void readCase(){
	cin >> N >> K;
	int j = -1;
	for (int i = 1; i <= (N - K + 1); i++)
	{
		for (int k = 0; k < K; k++){

		}
		j++;
		numbers[j] = i;
	}
}
void print(){
	int sum = 0;
	for (int i = 0; i<K; i++)
		sum += perm[i];
	if (sum != N)
		return;
	for (int i = 0; i < K; i++)
		{
			printf("%d", perm[i]);
		}
		printf("\n");
	}
void createPermutation(int i){
	int j;
	if (i == K)
	{
		print();
		bool check = false;
		check = checkAcceptance(perm);
		if (check)
			counter++;
		return;
	}

	for (j = 0; j < (N-K+1); j++){
		//Used[j] = 1;
		perm[i] = numbers[j];
		createPermutation(i + 1);
		//Used[j] = 0;
	}
}
void solveCase(){
	initUsed();
	createPermutation(0);
}
void printCase(){
	printf("%d\n", counter);
}
int main()
{
	int T;
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		counter = 0;
		test++;
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}