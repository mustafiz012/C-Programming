#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, grid[10][10], counter, test = 0;

void readCase(){
	for (int i = 0; i < T; i++)
		for (int j = 0; j < T; j++)
			cin >> grid[i][j];
}

void solve(int start, int end){
	Ans = 0;
	for (int i = start; i < end; i++){
		if (i == start || i == end - 1){
			for (int j = start; j < end; j++){
				Ans += grid[i][j];
			}
		}
		else{
			for (int j = start; j < end; j++)if (j == start || j == end - 1){
				Ans += grid[i][j];
			}
		}
	}
	if (Ans>0)
		printf("%d ", Ans);
	else return;
	counter--;
	if (counter >= 1){
		solve(start + 1, end - 1);
		//printf("%d\n", Ans);
	}
	else return;
}
void solveCase(){
	if (T / 2 == 0)
		counter = T / 2;
	else counter = (T / 2) + 1;
	printf("Case %d: ", test);
	solve(0, T);
	printf("\n");
}

void printCase(){

}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	while (scanf("%d", &T) == 1){
		//cin >> T;
		if (T == 0)
			break;
		test++;
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}
