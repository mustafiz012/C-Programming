#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
#define SIZE 4050
int T, Ans, counter, index;
bool flag;
char weights[SIZE];
int weightsInt[SIZE];
int insert(int index){
	counter++;
	int number = 0;
	for (int i = index; weights[i] != ' '; i++)
	{
		if (weights[i] == '\0')
			break;
		number = (number * 10) + weights[i] - '0';
	}
	return number;
}
void readCase(){
	counter = 0;
	gets(weights);
	index=0;
	weightsInt[0] = insert(0);
	for (int i = 0; weights[i] != '\0'; i++)
		if (weights[i] == ' ')
		{
			index++;
			weightsInt[index] = insert(i+1);
		}
	for (int i = 0; i <= index; i++){
		for (int j = i + 1; j <= index; j++){
			if (weightsInt[i] > weightsInt[j]){
				int temp;
				temp = weightsInt[i];
				weightsInt[i] = weightsInt[j];
				weightsInt[j] = temp;
			}
		}
	}
	/*
	for (int i = 0; i <= index; i++)
	cout << weightsInt[i]<<" ";
	printf("\n");
	*/
}

void solveCase(){
	int sum1 = 0, sum2 = 0, sum = 0;
	flag = false;
	sum2 = weightsInt[index];
	for (int i = index-1; i >= 0; i--){
		if (sum1 > sum2)
			sum2 += weightsInt[i];
		else
			sum1 += weightsInt[i];
	}
	if (sum1 == sum2)
		flag = true;
	else flag = false;
}

void printCase(){
	if (flag)
		printf("YES\n");
	else printf("NO\n");
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output_luggage.txt", "w", stdout);
	cin >> T;
	getchar();
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}