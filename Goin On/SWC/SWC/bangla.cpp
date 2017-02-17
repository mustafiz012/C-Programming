/*
5
5
18211 0 3
29790 1 1
31307 2 1
22294 0 1
28334 0 3
8
33940 0 2
35911 0 1
32827 1 2
41251 0 2
11856 1 0
17549 1 2
24639 3 0
27357 1 2
10
71676 1 2
31920 0 0
40528 1 0
15897 1 1
41588 1 0
30002 0 0
23741 0 1
10553 1 0
37658 1 2
40297 1 0
7
11074 0 1
18098 0 1
32327 1 2
13579 1 2
18092 0 2
17583 0 2
29664 2 1
1
10448 1 0
*/




#define _CRT_SECURE_NO_WARNINGS
#define SIZE 11
#define SIZE2 6
#include<iostream>
#include<cstdio>
using namespace std;
int T, N, done[SIZE2], Ans;
int Ci[SIZE2], Di[SIZE2];
char Bi[SIZE][SIZE2];
int intBi[SIZE][SIZE2];
void generateInt(int n){
	for (int i = 4; i >= 0; i--){
		done[i] = n % 10;
		n /= 10;
	}
}
bool checkCi(int n){
	return true;
}
bool checkBi(int n){
	generateInt(n);
	bool bFlag;
	int counter = 0;
	for (int i = 0; i < N; i++){ //Bi[i]
		bFlag = false;
		for (int j = 0; j < 5; j++){//Bi[0]
			for (int k = 0;k)
		}
	}
	return true;
}

void checking(){
	for (int i = 10000; i <= 99999; i++){
		if (checkCi(i) && checkBi(i))
			Ans++;
	}
}
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		Ans = 0;
		scanf("%d", &N);
		getchar();
		for (int i = 0; i < N; i++)
			scanf("%s%d%d", Bi[i], &Ci[i], &Di[i]);
		for (int i = 0; i < N; i++){
			for (int j = 0; j < 5; j++){
				if (Bi[i][j] != NULL)
					intBi[i][j] = Bi[i][j] - '0';
			}
		}
		checking();
		printf("%d\n", Ans);

	}
	return 0;
}
