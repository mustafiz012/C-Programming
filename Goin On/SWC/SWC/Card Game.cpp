#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, SIZE, midd, firstOne, secondOne, breaker=0;
char cards[6];
int cardsInt[6];
void parseInt(){
	SIZE = 0;
	for (int i = 0; cards[i] != '\0'; i++)
	{
		SIZE++;
		cardsInt[i] = cards[i] - '0';
	}
}

void readCase(){
	scanf("%s", cards);
	parseInt();
}
void print(){
	for (int i = 0; i < SIZE; i++)
		printf("%d", cardsInt[i]);
	printf("\n");
}
void parseChar(int first, int second){
	int temp = first*second;
	int i = 0, tempCardInt[6];
	while (temp != 0){
		tempCardInt[i] = temp % 10;
		temp /= 10;
		i++;
	}
	SIZE = i;
	int j = -1;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		j++;
		cardsInt[i] = tempCardInt[j];
	}
	printf("%d\n", SIZE);
	print();
}

void solveCase(){
	breaker++;
	if (SIZE % 2 == 0)
		midd = SIZE / 2;
	else midd = (SIZE / 2) + 1;
		int i;
		if (midd == 1)
		{
			firstOne = cardsInt[0];
			secondOne = cardsInt[1];
		}
		else{
			for (i = 0; i < midd - 1; i++)if (midd>1){
				firstOne = cardsInt[i] * 10 + cardsInt[i + 1];
			}
			for (int j = midd; j < SIZE-1; j++){
				secondOne = cardsInt[j] * 10 + cardsInt[j + 1];
			}
		}
		parseChar(firstOne, secondOne);
		if (SIZE == 0 || breaker==6)
			return;
		else solveCase();
}

void printCase(){

}

int main(){
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}