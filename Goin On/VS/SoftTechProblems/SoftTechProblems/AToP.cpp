#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#define SIZE 101
using namespace std;
int level, digits, digitsValues[10];
int values[SIZE];
int done[SIZE];
void takingCare(int n){
	if (n == digits){
		for (int i = 0; i < digits; i++)
			printf("%d", values[i]);
		cout << endl;
		return;
	}
	for (int j = 0; j < digits; j++) if(1==done[j]){
		values[n] = digitsValues[j];
		done[j] = 0;
		takingCare(n + 1);
		done[j] = 1;
	}
}

int main(){
	while (cin >> digits){

		for (int i = 0; i < digits; i++)
		{
			done[i] = 1;
			cin >> digitsValues[i];
		}
		takingCare(0);
	}
	return 0;
}