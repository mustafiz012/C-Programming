#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, cardNumbers, counter;

void solveCase(int count, int card){
	int card1, card2;
	if (card < 10)
	{
		if (Ans < count)
			Ans = count;
		return;
	}
	
	int divider = 10;
	while (card >= divider){
		card1 = card % divider;
		card2 = card / divider;
		divider *= 10;
		solveCase(count + 1, card1*card2);
	}
	
}
void readCase(){
	Ans = 0;
	cin >> cardNumbers;
	solveCase(0, cardNumbers);
}

void printCase(){
	printf("%d\n", Ans);
}

int main(){
	cin >> T;
	while (T--){
		readCase();
		//solveCase();
		printCase();
	}
	return 0;
}