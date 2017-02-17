#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<stdio.h>
using namespace std;
int T, N;
char sentence[SIZE];
void reduce(int index, int sizz){
	for (int i = index; i < sizz; i++){
		sentence[i] = sentence[i + 2];
	}
}
void reduction(int i){
	if (i <= 0)
		return;
	for (int j = 0; j < i; j++){
		for (int k = j+1; k < i; k++){
			if (sentence[j] == sentence[k]){
				reduce(j, i - 1);
				reduction(i-2);
				break;
			}
			else
				break;
		}
		if (j >= i - 1)
			i = 0;
	}
}
int main()
{
	cin >> T;
	getchar();
	while (T--){
		cin >> N;
		scanf("%s", sentence);
		reduction(N);
		printf("%s\n", sentence);
	}
	return 0;
}