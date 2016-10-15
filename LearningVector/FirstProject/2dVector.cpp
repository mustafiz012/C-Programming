#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
#include<cstdio>
#include<vector>
using namespace std;
#define MAX 100000 //maximum node
vector<int>edges[MAX];
vector<int>cost[MAX]; //parallel vector to store costs;
int main()
{
	int N, E, i;
	freopen("input.txt", "r", stdin);
	scanf("%d%d", &N, &E);
	for (i = 1; i <= E; i++)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		edges[x].push_back(y);
		edges[y].push_back(x);
		cost[x].push_back(1);
		cost[y].push_back(1);
	}
	for (int i = 0; i < E; i++) {
		printf("%d ", edges[1][i]);
	}
	return 0;
}