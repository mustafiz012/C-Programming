#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int T, P, Q, R, S, W, Bcost, cases = 0;
	cin >> T;
	while (T--){
        cases++;
		Bcost = 0;
		cin >> P >> Q >> R >> S >> W;
		if (W > R){
			Bcost += (S*(W - R))+Q;
		}
		else{
			Bcost += Q;
		}
		if (Bcost < (P * W)){
			printf("#%d %d\n", cases, Bcost);
		}
		else{
			printf("#%d %d\n", cases, (P * W));
		}
	}
	return 0;
}