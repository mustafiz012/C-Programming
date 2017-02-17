#include<iostream>
#include<stdio.h>
using namespace std;

string animals[101];
int marked[101];
void check(string s, int n)
{
	for (int i = 0; i<n - 1; i++)
	{
		if (animals[i] == s)
			marked[i] = 1;
	}
}
int main()
{
	int t, op = 1;
	cin >> t;
	while (t--)
	{
		for (int y = 0; y<101; y++)
			marked[y] = 0;
		string ip;
		cin >> ip;
		int i = 0, flag = 0;
		while (ip != "what")
		{
			if (ip == "goes")
			{
				flag = 1;
				cin >> ip;
				check(ip, i);
			}
			if (flag == 0)
			{
				animals[i] = ip;
				i++;
			}
			cin >> ip;
		}
		getline(cin, ip);
		cout << "#" << op << " ";
		op++;
		for (int y = 0; y<i - 1; y++)
		{
			if (marked[y] == 0)
				cout << animals[y] << " ";
		}
		cout << endl;
	}
	return 0;
}


