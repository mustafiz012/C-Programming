#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100001
#include<stdio.h>
#include<iostream>
using namespace std;

int T, Ans;
char line[SIZE], subLine[SIZE];

void visited(int index, int sizz){
	Ans++;
	for (int i = index; i < sizz + index; i++) {
		line[i] = '*';
	}
}

void matching(int index){
	int j = index;
	bool flag = true;
	int i;
	for (i = 0; subLine[i] != '\0'; i++){
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
	scanf("%s %s", line, subLine);
		Ans = 0;
		for (int i = 0; line[i] != '\0'; i++)
			for (int j = 0; subLine[j] != '\0'; j++)
				if (line[i] == subLine[j])
				{
					matching(i);
					break;
				}
		printf("%d\n", Ans);
	return 0;
}