#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

int T, N, M, Q, x, y, r[79801], s[79801], d[79801], minn, cost;

void solve(int a, int cost)
{
	if (cost > minn)
		return;
	if (a == y)
	{
		if (minn > cost)
			minn = cost;
		return;
	}

	for (int j = 0; j < M; j++)
	{
		if (a == s[j])
		{
			if (y == d[j])
			{
				solve(d[j], cost + r[j]);
			}
			else
				solve(d[j], cost + r[j]);
		}
	}

}

int main()
{

	cin >> T;
	for (int test = 0; test < T; test++)
	{
		cin >> N >> M;
		for (int i = 0; i < M; i++)
		{
			cin >> s[i] >> d[i] >> r[i];
		}
		cin >> Q;
		cout << "Case " << test + 1 << ":\n";
		for (int i = 0; i < Q; i++)
		{
			minn = 999999;
			cost = 0;
			cin >> x >> y;
			solve(x, 0);
			if (minn == 999999)
				minn = -1;
			cout << minn << endl;
		}
	}
}