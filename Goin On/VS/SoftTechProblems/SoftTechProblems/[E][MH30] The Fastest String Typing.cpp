#define _CRT_SECURE_NO_WARNINGS
#define SIZEA 10001
#define SIZEB 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, aSize, bSize, counter, Ans, cases = 0;
char strA[SIZEA], strB[SIZEB];
void counting(int sizeA, int sizeB){
	int i = 0;
	int j = 0;
	for (; i <= sizeB;){
		if (i == sizeB)
		{
			counter++;
			if (j <= (sizeA - sizeB))
				i = 0;
		}
		if (j >= sizeA)
			break;
		if (strA[j] == strB[i]){
			j++;
			i++;
		}
		else if (i > 0 && strA[j] != strB[i])
			i = 0;
		else
			j++;
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	cin >> T;
	getchar();
	while (T--){
		counter = 0;
		cases++;
		scanf("%s %s", strA, strB);
		for (aSize = 0; strA[aSize] != NULL; aSize++);
		for (bSize = 0; strB[bSize] != NULL; bSize++);
		counting(aSize, bSize);
		Ans = aSize - (bSize*counter) + counter;
		printf("#%d %d\n", cases, Ans);
	}
	return 0;
}