#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	char str1[101], str2[101];
	int str1Size, str2Size, T, cases = 0;
	bool flag;
	cin >> T;
	getchar();
	while (T--){
		cases++;
		scanf("%s %s", str1, str2);
		flag = false; str1Size = 0; str2Size = 0;
		printf("Case #%d:\n", cases);
		for (int i = 0; str1[i] != NULL; i++){
				printf("%c", str1[i]);
		}
		printf("\n");
		for (int i = 0; str2[i] != NULL; i++)
			printf("%c", str2[i]);
		printf("\n");
	}
	return 0;
}