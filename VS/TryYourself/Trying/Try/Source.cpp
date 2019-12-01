#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n, result=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		result += i*i;
	}
	printf("%d :: %d\n", result, (n*(n + 1)) / 2);
	return 0;
}