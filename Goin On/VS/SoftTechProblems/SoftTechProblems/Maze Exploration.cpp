//Maze Exploration

#define _CRT_SECURE_NO_WARNINGS
#define ROW 31
#define COLUMN 81
#include<stdio.h>
#include<iostream>
using namespace std;

int T, row, column, visited[ROW][COLUMN];
char maze[ROW][COLUMN];
char ch[101];
char wallChar;
bool flag = false;
bool breakingFlag;
int fx4[] = { 0, 1, 0, -1 };
int fy4[] = { 1, 0, -1, 0 };

void visiting(int starX, int starY){
	int x, y;
	for (int i = 0; i < 4; i++){
		x = starX + fx4[i];
		y = starY + fy4[i];
		if ((maze[x][y] == ' ' || maze[x][y] == '*') && x >= 0 && y >= 0 && x <= row&&y <= column){
			maze[x][y] = '#';
			visiting(x, y);
		}
	}
	/*
	if (maze[starX][starY] != ' ' && maze[starX][starY] != '*')
	return;
	if (visited[starX][starY] == 1 || starX < 0 || starY < 0 || starX > row || starY > column)
	return;
	maze[starX][starY] = '#';
	visited[starX][starY] = 1;
	visiting(starX, starY + 1);
	visiting(starX + 1, starY);
	visiting(starX, starY - 1);
	visiting(starX - 1, starY);
	visited[starX][starY] = 0;
	*/
}
int main()
{
	freopen("input.txt", "r", stdin);
	//freopen("outputMaze.txt", "w", stdout);
	cin >> T;
	gets(ch);
	while (T--){
		column = 0;
		row = 0;
		for (int i = 0;; i++){
			gets(maze[i]);
			if (maze[i][0] == '_')
				break;
			row++;
		}
		for (column = 0; maze[0][column] != '\0'; column++);
		for (int i = 0; i<row; i++){
			breakingFlag = false;
			int j;
			for (j = 0; j<column; j++){
				if (maze[i][j] == '*'){
					breakingFlag = true;
					break;
				}
			}
			if (breakingFlag){
				visiting(i, j);
				break;
			}
		}
		for (int i = 0; i <= row; i++)
			printf("%s\n", maze[i]);

	}
	return 0;
}