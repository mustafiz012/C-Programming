#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N, M, test = 0, factors[1000], counter, tempJ;

void readCase(){

}
bool checkPrime(int i){
	for (int j = 2; j<i; j++)
		if (i%j == 0)
			return false;
}
void creatingFatorical(int n){
	int j = -1;
	for (int i = 2; i < n; i++){
		if (n%i == 0 && checkPrime(i) != false)
		{
			j++;
			factors[j] = i;
		}
	}
	tempJ = j;
}

void checking(int j){
	bool flag = false;
	int tempN = N;
	for (int i = j; i >= 0; i--){
		if (tempN + factors[i] <= M)
		{
			counter++;
			//printf("%d %d\n", tempN + factors[i], counter);
			if (tempN + factors[i] == M)
			{
				Ans = counter;
				flag = true;
				return;
			}
			tempN += factors[i];
			//N = tempN;
			creatingFatorical(tempN);
			checking(tempJ);
			//return Ans;
		}
		else
		{
			flag = false;

		}
		
	}
	if (flag == false && j>0)
		checking(j - 1);
}

void solveCase(){
	if (N == M)
	{
		Ans = 0;
		return;
	}
	if (N >= M)
	{
		Ans = -1;
		return;
	}
	creatingFatorical(N);
	counter = 0;
	checking(tempJ);
}

void printCase(){
	printf("Case %d: %d\n",test, Ans);
}

int main(){
	//cin >> T;
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	while (scanf("%d%d", &N, &M)==2){
		test++;
		if (N == 0 && M==0)
			break;
		//readCase();
		Ans = -1;
		//counter = 0;
		solveCase();
		printCase();
	}
	return 0;
}