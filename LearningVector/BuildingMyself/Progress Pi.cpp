#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
using namespace std;
int T;
float P, X, Y;
float percentage;
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--) {
		cin >> P >> X >> Y;
		percentage = (P / 100) * 360;
		printf("%.0f %.0f :: %.0f\n", X, Y, percentage);
	}
	return 0;
}