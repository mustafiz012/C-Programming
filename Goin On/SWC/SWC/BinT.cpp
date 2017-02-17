#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, N, test = 0;
int arr[500];
void readCase(){
	cin >> N;

}
void print(){
	for (int i = 0; i < N;i++)
		printf("%d", arr[i]);
	printf("\n");
}
void BinTree(int len, int index){
	if (len == N)
	{
		print();
		return;
	}
	/*
	for (int i = 0; i < 2; i++){
		arr[index] = i;
		printf("%d %d\n", len, index);
		BinTree(len + 1, index + 1);
	}
	*/
	
	arr[index] = 0;
	//printf("%d %d\n", len, index);
	BinTree(len+1, index+1);
	//printf("%d %d\n", len, index);
	arr[index] = 1;
	//printf("%d %d\n", len, index);
	BinTree(len + 1, index + 1);
	

	/*
	for (int k = 0; k <= len;k++)
	printf("%d", arr[k]);
	printf("\n");
	*/
}
void solveCase(){
	BinTree(0,0);
}

void printCase(){

}
int main(){
	//freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		test++;
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}