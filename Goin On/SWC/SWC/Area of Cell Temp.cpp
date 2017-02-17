#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N, ii, jj, tt;
char grid[101][101], str[101];
int Used[101][101];

void readCase(){
	//cin >> N;
	scanf("%d ", &N);
	for (int i = 1; i <= N; i++)
		gets(grid[i]);
}
void InitUsed(){
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			Used[i][j] = 0;
}
void solve(int i, int j, int counter){
	if (grid[i][j] == 'L')
		return;
	if (j + 1 < N && grid[i][j + 1] == 'W' && 0 == Used[i][j + 1])
	{
		Used[i][j + 1] = 1;
		solve(i, j + 1, counter + 1);
		Used[i][j + 1] = 0;
	}
	if (j - 1 >= 0 && grid[i][j - 1] == 'W' && 0 == Used[i][j - 1])
	{
		Used[i][j - 1] = 1;
		solve(i, j - 1, counter + 1);
		Used[i][j - 1] = 0;
	}
	if (i - 1 >= 1 && grid[i - 1][j] == 'W' && 0 == Used[i - 1][j])
	{
		Used[i - 1][j] = 1;
		solve(i - 1, j, counter + 1);
		Used[i - 1][j] = 0;
	}
	if (i + 1 <= N && grid[i + 1][j] == 'W' && 0 == Used[i + 1][j])
	{
		Used[i + 1][j] = 1;
		solve(i + 1, j, counter + 1);
		Used[i + 1][j] = 0;
	}
	if (i + 1 <= N && j - 1 >= 0 && grid[i + 1][j - 1] == 'W' && 0 == Used[i + 1][j - 1])
	{
		Used[i + 1][j - 1] = 1;
		solve(i + 1, j - 1, counter + 1);
		Used[i + 1][j - 1] = 0;
	}
	if (i - 1 >= 1 && j + 1 < N && grid[i - 1][j + 1] == 'W' && 0 == Used[i - 1][j + 1])
	{
		Used[i - 1][j + 1] = 1;
		solve(i - 1, j + 1, counter + 1);
		Used[i - 1][j + 1] = 0;
	}
	if (Ans < counter)
		Ans = counter;
}
void solveCase(){
	InitUsed();
	cin >> tt;
	for (int i = 0; i < tt; i++){
		cin >> ii >> jj;
		Ans = 0;
		solve(ii, jj - 1, 0);
		printf("%d\n", Ans);
	}
}

void printCase(){

}

int main(){
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}
