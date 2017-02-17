#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, N, amount[1001], Ans;
void solveCase(){

}
int main(){
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		cin >> N;
		Ans = 0;
		for (int i = 0; i < N; i++)
			cin >> amount[i];
		for (int i = 1; i < N; i++){
			for (int j = i-1; j >= 0; j--){
				if (amount[i] >= amount[j])
					Ans++;
			}
		}
		printf("%d\n", Ans);
	}
	return 0;
}