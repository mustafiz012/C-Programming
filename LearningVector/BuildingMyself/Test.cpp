#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
#define SIZE 100001
int T, len, mid;
//char pre[SIZE];
string pre;
bool flag;

void readCase() {
	len = 0;
	//cin >> pre;
	scanf("%s", &pre);
	flag = true;
}

void solveCase() {
	for (int i = 0; pre[i] != '\0'; i++)
		len++;
	if (len == 1) mid = len;
	else mid = len / 2;
	for (int i = 0; i < mid; i++) {
		if (pre[i] != pre[len - 1 - i]) {
			flag = false;
			break;
		}
	}
}

void printCase() {
	if (flag)
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");
}
int main() {
	freopen("Finding Next Integer.txt", "r", stdin);
	cin >> T;
	while (T--) {
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}