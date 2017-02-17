#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100001
#include<stdio.h>
#include<iostream>
using namespace std;

int T, Ans;
char line[SIZE], subLine[SIZE];

void visited(int index, int sizz){
	Ans++;
	for (int i = index; i < sizz+index; i++){
		line[i] = '*';
	}
}

void matching(int index){
	int j = index;
	bool flag = true;
	int i;
	for (i = 0; subLine[i] != NULL; i++){
		if (subLine[i] != line[j])
		{
			flag = false;
			break;
		}
		j++;
	}
	if (flag)
		visited(index, i);
}

int main(){
	freopen("input.txt", "r", stdin);
	cin >> T;
	gets(subLine);
	while (T--){
		Ans = 0;
		scanf("%s %s", line, subLine);
		for (int i = 0; line[i] != NULL; i++)
			for (int j = 0; subLine[j] != NULL; j++)
				if (line[i] == subLine[j])
				{
					//printf("%d %d :: %c %c\n", i, j, line[i], subLine[j]);
					for (int ii = 0; line[ii] != NULL; ii++)
						printf("%c", line[ii]);
					cout << endl;
					matching(i);
					break;
				}
		printf("%d\n", Ans);
	}
	return 0;
}