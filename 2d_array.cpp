#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int array2d[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> array2d[i][j];
		}
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//printf("%d ", array2d[j][i]);  //inverse
			printf("%d ", array2d[i][j]);
		}
		printf("\n");
	}


}
