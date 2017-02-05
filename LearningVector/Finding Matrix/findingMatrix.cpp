#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int T, N, matrix[101][101];
int main()
{
	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> matrix[i][j];
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cout << matrix[i][j] << " ";
		printf("\n");
	}
	return 0;
}
