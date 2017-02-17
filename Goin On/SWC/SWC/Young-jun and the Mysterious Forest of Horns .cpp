#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
int N, M;
int uni, twin;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		uni = 0, twin = 0;
		cin >> N >> M;
		for (int i = M; i>0; i--){
			if (N > i){
				N -= 2;
				twin++;
			}
			else{
				N -= 1;
				uni++;
			}
		}
		printf("#%d: %d %d\n", test_case, uni, twin);
	}
	return 0;
}