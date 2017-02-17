#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int pie, person, n,b[100];
void print()
{
	for (int i = 0; i < n; i++)	cout << b[i];
	cout << endl;
}
void solve(int x)
{
	if (x < person)
	{
		for (int i = 0; i < n; i++)
		{
			b[x] = i;
			solve(x + 1);
		}
	}
	else
	{
		print();
		return;
	}
}
int main()
{
	int T;
	freopen("input.txt", "r", stdin);
	cin >> T;
	for (int p = 1; p <= T;p++)
	{
		cin >> pie >> person;
		n = pie - person + 1;
		solve(0);
	}
	return 0;
}