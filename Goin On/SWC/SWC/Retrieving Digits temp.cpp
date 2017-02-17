#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, test = 0;
char number[2001];
int one, two, three, four, five, six, seven, eight, nine, I9, S7, F5, H3, O1, zero;
void readCase(){
	scanf("%s", number);
	zero = two = four = six = eight = I9 = S7 = F5 = H3 = O1 = 0;
}

void solveCase(){
	for (int i = 0; number[i] != 0; i++){
		if (number[i] == 'Z')
			zero++;
		else if (number[i] == 'W')
			two++;
		else if (number[i] == 'U')
			four++;
		else if (number[i] == 'X')
			six++;
		else if (number[i] == 'G')
			eight++;
		else if (number[i] == 'O')
			O1++;
		else if (number[i] == 'S')
			S7++;
		else if (number[i] == 'I')
			I9++;
		else if (number[i] == 'F')
			F5++;
		else if (number[i] == 'H')
			H3++;
	}
	one = O1 - zero - two - four;
	three = H3 - eight;
	five = F5 - four;
	seven = S7 - six;
	nine = I9 - six - five - eight;
	printf("Case #%d: ", test);
	for (int i = 0; i<zero; i++)
		printf("0");
	for (int i = 0; i<one; i++)
		printf("1");
	for (int i = 0; i<two; i++)
		printf("2");
	for (int i = 0; i<three; i++)
		printf("3");
	for (int i = 0; i<four; i++)
		printf("4");
	for (int i = 0; i<five; i++)
		printf("5");
	for (int i = 0; i<six; i++)
		printf("6");
	for (int i = 0; i<seven; i++)
		printf("7");
	for (int i = 0; i<eight; i++)
		printf("8");
	for (int i = 0; i<nine; i++)
		printf("9");
	printf("\n");
}


int main(){
	cin >> T;
	while (T--){
		test++;
		readCase();
		solveCase();
	}
	return 0;
}