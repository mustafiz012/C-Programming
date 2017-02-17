#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N;
bool flag;
int coupon = 2, discount = 2;
int particinpants[10000];
void readCase(){
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> particinpants[i];
}

void solveCase(){
	flag = true;
	/*
	if (coupon <= 0 || discount <= 0)
	{
	flag = false;
	return;
	}
	*/
	for (int i = 0; i < N; i++){
		if (particinpants[i] % 2 == 1 && i == 0)
		{
			coupon = 1;
			flag = false;
		}
		else if (particinpants[i] == 0 && coupon == 1)
		{
			flag = false;
			return;
		}
		else if (i+1<=N-1 && particinpants[i] % 2 == 1 && particinpants[i+1]%2==1 && coupon==2){
			coupon--;
			flag = true;
		}
		
		else if (i + 1 <= N - 1 && particinpants[i] % 2 == 1 && particinpants[i + 1] % 2 == 0 && coupon == 2){
			coupon--;
			flag = true;
		}
		else if (i-1>=0 && coupon == 1 && particinpants[i] % 2 == 1 && particinpants[i-1] % 2 == 1){
			coupon == 2;
			flag = true;
		}
		else if (i + 1 <= N - 1 && coupon == 1 && particinpants[i] % 2 == 0){
			particinpants[i]--;
			if (particinpants[i] % 2 == 1)
				coupon = 1;
			else{
				coupon == 2;
				flag = true;
			}
		}
		else if (i + 1 <= N - 1 && particinpants[i]%2==0 && particinpants[i+1]%2==0 && coupon==2){
			flag = true;
		}
		else if (particinpants[i] % 2 == 0 && coupon == 1 && particinpants[i+1]%2==0)
		{
			coupon = 2;
		}
		else if (particinpants[i] % 2 == 0 && coupon == 1 && particinpants[i + 1] % 2 == 1){
			coupon = 2;
			flag = true;
		}
		else if (coupon == 1 && i - 2 == i)
		{
			flag = false;
			return;
		}
		else if (i == N - 1 && particinpants[i] % 2 == 1 && coupon == 1){
			flag = true;
			return;
		}
	}
}

void printCase(){
	if (flag)
		printf("YES\n");
	else printf("NO\n");
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