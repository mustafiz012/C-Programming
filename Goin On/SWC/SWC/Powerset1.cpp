#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define SIZE 101
int digits, level;
int Bin[SIZE];
int done[SIZE];

void printBinary(){
	int i;
	for (i = 0; i < level; i++)
		printf("%d", Bin[i]);
	printf("\n");
}

void solve(int i){
	//printf("%d %d\n", i, level);
	if (i == level){
		printBinary();
		return;
	}
	for (int j = 1; j <= digits; j++) if(0==done[j]){
		Bin[i] = j;                                                            
		done[j] = 1;
		solve(i + 1);
		done[j] = 0;
	}
}

int main(){
	while (cin >> digits >> level){
		for (int i = 0; i < SIZE; i++)
			done[i] = 0;
		solve(0);
	}
	return 0;
}