#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int t, T;
int n;
int jmax, maxbana;
int arr[201][101];

void initarr()
{
	for (int i = 0; i < 201; i++)
	{
		for (int j = 0; j < 101; j++)
			arr[i][j] = 0;
	}
}
void readcase()
{
	initarr();
	cin >> n;
	for (int i = 0; i <= 2 * n - 1; i++)
	{
		if (i < n)
			jmax = i;
		else
			jmax = 2 * n - i;
		for (int j = 0; j < jmax; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void solve(int i, int j, int cnt)
{
	if (j<0 || j>n)
		return;
	if (i == ((2 * n) - 1))
	{
		if (cnt > maxbana)
			maxbana = cnt;
		return;
	}
	if (i < n)
	{
		solve(i + 1, j, cnt + arr[i + 1][j]);
		solve(i + 1, j + 1, cnt + arr[i + 1][j + 1]);
	}
	else
	{
		solve(i + 1, j, cnt + arr[i + 1][j]);
		solve(i + 1, j - 1, cnt + arr[i + 1][j - 1]);
	}
}
void solvecase()
{
	maxbana = 0;
	solve(0, 0, arr[0][0]);
}

void printcase()
{
	cout << "Case " << t << ": " << maxbana << endl;
	/*cout << "n: " << n << endl;
	for (int i = 0; i <= 2 * n - 1; i++)
	{
	if (i < n)
	jmax = i;
	else
	jmax = 2 * n - i;
	for (int j = 0; j < jmax; j++)
	{
	cout << arr[i][j] << " ";
	}
	cout << endl;
	}*/
	//cout << endl;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> T;
	for (t = 1; t <= T; t++)
	{
		readcase();
		solvecase();
		printcase();
	}
	return 0;
}
