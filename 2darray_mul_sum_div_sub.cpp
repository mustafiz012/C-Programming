#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int m, n, p, sum, array2d[4][4], array2d2[4][4], array2dans[4][4];

		printf("Array Size: \n");
		cin >> p;
		m = n = p;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> array2d[i][j];

		}

	}
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
                cin >> array2d2[i][j];

            }
	}
	printf("\n\n");
	/*
	//2d traversing in the right way using my thought
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("\t%d ", array2d[i][j]);
		}
		printf("\n");
	}
        printf("\n\n");

	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++) {
			printf("\t%d ", array2d2[i][k]);

		}
		printf("\n");
	}
	*/

	//multiplication of two 2d array elements

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum = 0;
			for (int k = 0; k < p; k++) {
				sum = sum + (array2d[i][k] * array2d2[k][j]);
			}
			array2dans[i][j] = sum;
		}
	}
	printf("Multiplication Matrix: \n");
	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++) {
			printf("\t%d ", array2dans[i][k]);

		}
		printf("\n");
	}

	//summation
    printf("Summation Matrix: \n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
				array2dans[i][j] = (array2d[i][j] + array2d2[i][j]);
				printf("\t%d ", array2dans[i][j]);
			}
			printf("\n");
		}

	//Subtraction
	printf("Subtracted Matrix: \n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			array2dans[i][j] = (array2d[i][j] - array2d2[i][j]);
			printf("\t%d ", array2dans[i][j]);
		}
		printf("\n");
	}

	return 0;
}
