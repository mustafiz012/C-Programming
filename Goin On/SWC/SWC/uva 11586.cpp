#define _CRT_SECURE_NO_WARNINGS
#define SIZE 152
#include<stdio.h>
#include<iostream>
using namespace std;
int T, mCounter, fCounter, fmCounter, mfCounter;
char pieces[SIZE];
int main(){
	freopen("input.txt", "r", stdin);
	freopen("ouput.txt", "w", stdout);
	scanf("%d", &T);
	getchar();
	while (T--){
		mCounter = 0, fCounter = 0, fmCounter = 0, mfCounter = 0;
		gets(pieces);
		for (int i = 0; pieces[i] != NULL; i++)if(' ' != pieces[i]){
			if (i - 1 >= 0 && pieces[i - 1] == 'M' && pieces[i] == 'M')
				mCounter++;
			else if (i - 1 >= 0 && pieces[i - 1] == 'F'&& pieces[i] == 'F')
				fCounter++;
			else if (i - 1 >= 0 && pieces[i - 1] == 'M'&& pieces[i] == 'F')
				mfCounter++;
			else if (i - 1 >= 0 && pieces[i - 1] == 'F'&& pieces[i] == 'M')
				fmCounter++;
			if (mCounter == fCounter)
				mCounter = 0, fCounter = 0;
			if (fmCounter > 0 && fmCounter % 2 == 0)
				fmCounter = 0;
			else if (mfCounter > 0 && mfCounter % 2 == 0)
				mfCounter = 0;
			else if (fmCounter == mfCounter)
				fmCounter = 0, mfCounter = 0;
		}
		if ((mCounter + fCounter + fmCounter + mfCounter)>0)
			printf("NO LOOP\n");
		else
			printf("LOOP\n");
	}
	return 0;
}