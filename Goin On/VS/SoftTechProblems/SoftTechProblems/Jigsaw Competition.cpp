#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N, c, p[1001], t[1001];
int Ria, Liza, x1, x2;
void readCase(){
	cin >> N >> c;
	for (int i = 0; i < N; i++)
		cin >> p[i];
	for (int i = 0; i < N; i++)
		cin >> t[i];
}

void solveCase(){
	Liza = Ria = 0;
	x1 = x2 = 0;
	int j = N-1;
	for (int i = 0; i < N; i++){
		x1 += t[i];
		if ((p[i] - (c*x1))>0)
			Liza += (p[i] - (c*x1));
		x2 += t[j];
		if ((p[j] - (c*x2))>0)
			Ria += (p[j] - (c*x2));
		j--;

	}
}

void printCase(){
	if (Ria > Liza)
		printf("Ria\n");
	else if (Ria == Liza)
		printf("Tie\n");
	else printf("Liza\n");
}

int main(){
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}