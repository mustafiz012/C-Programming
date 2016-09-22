#include<iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
using namespace std;
#define N 101 //maximum number of coins
#define M 25001 //maximum share of each person, max coin is 500c and max number of coins is 100

bool  v[M];
int iabs(int n)
{
	return (n > 0) ? n : -n;
}
int main()
{
	int i, j, NumberOfProblems, NoOfCoins, m, sum, a[N];
	//cin number of problems
	cin >> NumberOfProblems;

	while (NumberOfProblems-- > 0)
	{
		//cin number of coins 
		cin >> NoOfCoins;

		//cin the coins and calculate their sum
		for (sum = 0, i = 1; i <= NoOfCoins; i++)
			cin >> a[i], sum += a[i];

		//the share of each person (minus one if sum is odd)
		m = sum / 2;
		memset(v, 0, sizeof(v));
		v[0] = true;

		//fill the v table
		//for each coins of the coins check with true the elements off the table v that
		// can be reached by adding this coin//example adding first coin 3
		//v[0] = v[3] = true//adding 2
		// v[0] = v[2] = v[3] =v[5]
		for (i = 1; i <= NoOfCoins; i++)
			for (j = m; j >= 1; j--)
				//if element j in the v table is false see if it could be reached or no//if its true leave it
				if (!v[j])
					v[j] = (a[i] <= j) ? v[j - a[i]] : false;

		//see which is the last element that can be reached within the rangeof the share of each person
		for (j = m; j >= 1; j--)
			if (v[j])
				break;

		//the rest is the difference between total money and total shares
		cout << iabs(sum - j * 2) << endl;
	}
	return 0;
}






/*

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

int minFinder(int i, int j) {
	if (i > j) return j;
	else return i;
}

int main() {
	int T, N, input[101], sum1, sum2;
	freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--) {
		cin >> N; sum1 = 0; sum2 = 0;
		for (int i = 0; i < N; i++)
			cin >> input[i];
		for (int i = 0; i<N; i++) {
			for (int j = i + 1; j<N; j++) {
				if (input[i]>input[j]) {
					int temp;
					temp = input[i];
					input[i] = input[j];
					input[j] = temp;
				}
			}
		}

		sum1 = input[N - 1];
		for (int i = (N - 2); i >= 0; i--) {
			if (sum1 > sum2)
				sum2 += input[i];
			else
			{
				sum1 += input[i];
			}
			if (sum1 > sum2) {
				sum1 -= sum2;
				sum2 = 0;
			}
			else {
				sum2 -= sum1;
				sum1 = 0;
			}
		}
		if(sum1>sum2)
			printf("%d\n", sum1 - sum2);
		else
			printf("%d\n", sum2 - sum1);
	}
	return 0;
}

*/