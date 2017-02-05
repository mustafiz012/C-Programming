#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<stdio.h>
using namespace std;
int done[SIZE];
int digits;
int permDigits[SIZE];
int permutedNumbers[SIZE];

void permute(int level) {
	if (level == digits) {
		for (int i = 0; i < digits; i++) {
			printf("%d", permutedNumbers[i]);
		}
		cout << endl;
		return;
	}
	for (int j = 0; j < digits; j++) if(0==done[j]){
		permutedNumbers[j] = permDigits[level];
		done[j] = 1;
		permute(level + 1);
		done[j] = 0;
	}
}
int main()
{
	while (cin >> digits) {
		for (int i = 0; i < digits; i++) {
			done[i] = 0;
			cin >> permDigits[i];
		}
		permute(0);
	}
	return 0;
}