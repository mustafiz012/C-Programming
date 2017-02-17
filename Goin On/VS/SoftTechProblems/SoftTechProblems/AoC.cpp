#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, N, Ans, NoQ;
int x, y;
char land[SIZE][SIZE], done[SIZE][SIZE];
int fx4[] = {0, 1, 0, -1, 1, -1, 1, -1};
int fy4[] = {1, 0, -1, 0, 1, -1, -1, 1};

void calculation(int xx, int yy, int counter){
	int x, y;
	for (int i = 0; i < 8; i++){
		x = xx + fx4[i];
		y = yy + fy4[i];
		if (done[x][y] == 0 && x>0 && y>0 && x < N&&y < N && land[x][y] == 'W'){
			done[x][y] = 1;
			calculation(x, y, counter + 1);
			done[x][y] = 0;
		}
	}
	if (Ans < counter)
		Ans = counter;
}

void input(){
	for (int i = 0; i < N; i++)
		scanf("%s", land[i]);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			done[i][j] = 0;
	cin >> NoQ;
	while (NoQ--){
		cin >> x >> y;
		Ans = 0;
		calculation(x, y, 0);
		//output();
		printf("%d\n", Ans);
	}
}



void output(){

}

int main(){
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		cin >> N;
		getchar();
		input();
	}
	return 0;
}