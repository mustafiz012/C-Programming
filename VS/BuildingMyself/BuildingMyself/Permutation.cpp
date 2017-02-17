#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define SIZE 101
#include<cstdio>
using namespace std;
int N, T, permArray[SIZE], inputArray[SIZE], done[SIZE], recursiveCall, printCall;

void generatePermNumber(int index) {
	recursiveCall++;
	if (index == N) {
		printCall++;
		for (int i = 0; i < N; i++)
			printf("%d ", permArray[i]);
		cout << endl;
		return;
	}

	for (int j = 0; j < N; j++) if (0 == done[j]) {
		done[j] = 1;
		permArray[index] = inputArray[j];
		generatePermNumber(index + 1);
		//printf("%d done\n", index);
		done[j] = 0;
	}
}

int main()
{
	scanf("%d", &T);
	while (T--) {
		cin >> N;
		recursiveCall = 0; printCall = 0;
		for (int i = 0; i < N; i++)
			cin >> inputArray[i];
		for (int i = 0; i < N; i++)
			done[i] = 0;
		generatePermNumber(0);
		//printf("\ntotal call: %d\t print call:%d\n", recursiveCall, printCall);
	}
	return 0;
}