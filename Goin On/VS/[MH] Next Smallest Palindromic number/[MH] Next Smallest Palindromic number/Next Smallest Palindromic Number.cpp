#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

bool flag = false;
string pal;
int length;
string nextString(char next[], int len){
	string updateNext;
	for (int i = len-1; i>=0; i--){
		if (((next[len-1] - '0') + 1) == 10){
			updateNext[len-1] = '0';
			

		}
		else if (i)
		{
			updateNext[]
		}

	}
	return updateNext;
}
string checkingPalind(char pal[]){
	char revStr[1000001];
	string nextStr;
	int i, mid, check;
	length = 0;
	for (int i = 0; pal[i] != '\0'; i++)
		length++;
		//length = strlen(pal);
	nextStr = nextString(pal, length);
		mid = length / 2;
		length--;
		check = 1;
		for (i = 0; i < mid; i++) {
			if (pal[i] != pal[length - i]) {
				check = 0;
				break;
			}
		}
		if (check)
			return pal;
		else checkingPalind(pal);
}
	/*
	
int checkingPalindrome(int i)
{
	int reverses = 0, rem, temp;
	temp = i;
	while (temp != 0)
	{
		rem = temp % 10;
		reverses = reverses * 10 + rem;
		temp /= 10;
	}
	if (reverses == i)
	{
		flag = true;
		return i;
	}
	else
	{
		flag = false;
		checkingPalindrome(i+1);
	}
}
*/
int main()
{
	int T;
	string checkPal;
	//freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--)
	{
		//cin >> palin;
		scanf("%s", &pal);
		checkPal = checkingPalind(pal);
		//check = checkingPalindrome(palin+1);
		//if (flag==true) printf("%d\n", check);
	}
	return 0;
}