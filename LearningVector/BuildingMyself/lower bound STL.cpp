#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdio>
#include<stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	long long N, M, val;
	freopen("input.txt", "r", stdin);
	cin >> N;
	long long arr[1000];
	for (long long i = 1; i <= N; i++)
		cin >> arr[i];
	cin >> M;
	for (long long i = 1; i <= M; i++) {
		cin >> val;
		bool flag = false;
		for (long long j = 1; j <= N; j++) {
			if (arr[j] == val)
			{
				printf("Yes %lld\n", j);
				flag = true;
				break;
			}
		}
		if (flag == false)
			printf("No %lld\n", val + 1);
	}
	return 0;
}
