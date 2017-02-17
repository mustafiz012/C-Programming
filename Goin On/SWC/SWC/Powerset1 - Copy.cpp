#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define SIZE 101
int X, Y;
int Bin[SIZE];

void printBinary(){
	int i;
	for (i = 0; i < Y; i++)
		printf("%d", Bin[i]);
	printf("\n");
}
int Used[SIZE];
void initUsed(){
	int i;
	for (i = 0; i < SIZE; i++){
		Used[i] = 0;
	}
}
void solve(int i){
	int j;
	if (i == Y){
		printBinary();
		return;
	}

	for (j = 0; j < X; j++) if(0==Used[j]){
		Bin[i] = j;
		Used[j] = 1;
		solve(i + 1);
		Used[j] = 0;
	}
}

int main(){
	initUsed();
	cin >> X >> Y;
	solve(0);
	return 0;
}