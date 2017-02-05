#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<stdio.h>
using namespace std;
int digits;
int combinationDigits[SIZE], numberCombination[SIZE];

void generateCombination(int level) {
	if (level == digits) {
		for (int i = 0; i < digits; i++) 
			printf("%d", numberCombination[i]);
		cout << endl;
		return;
	}
	for (int j = 0; j < digits; j++) {
		numberCombination[j] = combinationDigits[level];
		generateCombination(level + 1);

	}
}
int main()
{
	while (cin >> digits) {
		for (int i = 0; i < digits; i++)
			cin >> combinationDigits[i];
		generateCombination(0);
	}
	return 0;
}