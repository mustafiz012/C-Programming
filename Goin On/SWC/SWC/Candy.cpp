#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, test = 0, V, H;
int counter, Ans, indexCounter;
char grid[401][401], trans[401][401];

void readCase() {
	cin >> V >> H;
	for (int i = 0; i < V; i++)
		for (int j = 0; j < H; j++)
			cin >> grid[i][j];
}

void makingZero(int i, int j) {
	for (int k = j; k <= 3; k++) {
		grid[i][k] = '.';
		printf("%c", grid[i][k]);
	}
	printf("\n");
}
void traversing() {
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < H; j++) {
			if (grid[i][j] == 'o'){
				if (j + 1 < H && j - 1 >=0 && grid[i][j + 1] == '<' && grid[i][j - 1] == '>')
					Ans++;
				else if (i + 1 < V && i - 1 >= 0 && grid[i - 1][j] == 'v' && grid[i + 1][j] == '^')
					Ans++;
			}
		}
	}
}


void transforming() {
	for (int i = 0; i < V; i++)
		for (int j = 0; j < H; j++)
			trans[j][i] = grid[i][j];
}

void traversing2() {
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < H; j++) {
			if (trans[i][j] == 'v')
			{
				counter = 1;
				indexCounter = j;
			}
			else if (counter == 1 && trans[i][j] == 'o' && j == indexCounter + 1) {
				indexCounter = j;
				counter = 2;
			}
			else if (counter == 2 && trans[i][j] == '^' && j == indexCounter + 1) {
				Ans++;
				counter = 0;
				//makingZero(i, j - 2);
				//indexCounter = 0;
			}
			if (j >= indexCounter + 1 && counter >= 2)
			{
				int ttt2;
				ttt2 = counter;
				counter = 0;
			}
		}
	}
}
void solveCase() {
	Ans = 0;
	counter = 0;
	traversing();
	//transforming();
	//traversing2();

}

void printCase() {
	printf("#%d %d\n",test, Ans);
}
int main() {
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--) {
		test++;
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}