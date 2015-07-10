#include<stdio.h>
#include<string.h>

int main()
{
    char pStr[10], revStr[10];
	int length, i, mid, check;

	while (scanf("%s", pStr) != EOF) {
		length = strlen(pStr);
		mid = length / 2;
		length--;
		check = 1;
		for (i = 0; i < mid; i++) {
			if (pStr[i] != pStr[length - i]) {
				check = 0;
				break;
			}
		}
		if (check)
		printf("\nPalindrome!\n");
	else
		printf("\nNot Palindrome!\n");
	}




}
