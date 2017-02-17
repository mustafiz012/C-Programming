#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int N, d1, d2, T;
	while (T--){
		cin >> N;
		char array2D[20][20], output;
		d = 0;
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				cin >> array2D[i][j];
			}
		}

		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if (i == j && array2D[0][0] == array2D[i][j]){
					d1++;
					output = array2D[0][0];
				} else if ()
			}
		}

		if (d == N){
			cout << output;
			break;
		}
		else{
			printf("ongoing\n");
			break;
		}
	}


	return 0;
}