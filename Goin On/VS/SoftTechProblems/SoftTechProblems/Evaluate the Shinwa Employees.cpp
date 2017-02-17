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

	for (int i = 0; i < N; i=i+2)if(i+2<=N-1){
		if (employees[i + 1] - employees[i]>1)
		{
			index++;
			diff[index] = employees[i + 1] - employees[i];
		}
		
		if (employees[i + 1] == employees[i])
		{
			index2++;
			same[index2] = employees[i];
		}
	}
	if (index == -1)
		diff[0] = 0;
	if (index2 == -1)
	{
		same[0] = 0;
		printf("%d\n", same[0]);
	} else if (index>1)
		printf("%d\n", diff[index]-1);
	else if (index == -1){
		printf("%d\n", employees[N - 1]);
	}
}

void printCase(){

}

int main(){
	cin >> T;
	while (T--){
		index = -1;
		index2 = -1;
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}