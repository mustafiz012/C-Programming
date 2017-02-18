#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#define SIZE 10
int T, N, permu[SIZE], A[SIZE], Ans, V, tempV;
void sorting() {
	int temp;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (A[i] < A[j]) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--) {
		cin >> N;
		Ans = 0;
		for (int i = 0; i < N; i++) 
			cin >> A[i];
		cin >> V;
		tempV = 0;
		for (int i = 0; i < N; i++) {
			if (tempV + A[i] <= V)
			{
				tempV += A[i];
				Ans++;
			}
			if (tempV == V)
				break;
		}
		printf("%d\n", Ans);
	}
	return 0;
}