#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, N, Ans, index, index2;
#define SIZE 3001
int employees[SIZE], diff[100], same[100];

void readCase(){
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> employees[i];
}

void solveCase(){
	int temp;
	for (int i = 0; i<N; i++){
		for (int j = i + 1; j<N; j++){
			if (employees[i]>employees[j]){
				temp = employees[i];
				employees[i] = employees[j];
				employees[j] = temp;
			}
		}
	}


	for (int i = 0; i < N; i++){
		for (int j = i + 1; j<N; j++){
			if (employees[i] == employees[j]){
				employees[i] ++;
				index++;
				i = -1;
			}
		}
	}
}

void printCase(){
	printf("%d\n", index);
}

int main(){
	cin >> T;
	while (T--){
		index = 0;
		index2 = -1;
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}