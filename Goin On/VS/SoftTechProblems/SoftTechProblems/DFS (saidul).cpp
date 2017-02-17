#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
#define SIZE 100
int Node,Edge;
int graph[SIZE][SIZE];
int maximum;
void readCase()
{
    int i, j,x,y;
    for (i = 0; i < Edge; i++)
    {
        cin >> x >> y;
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
}
void DFS(int pos, int len)
{
    if (len > maximum)
    {
        maximum = len;
    }
    int i, j;
    for (i = 0; i < Node; i++)
    {
		printf("%d %d-->%d\n", pos, i, graph[pos][i]);
        if (graph[pos][i]==1)
        {
            graph[pos][i] = 0;
            graph[i][pos] = 0;
            DFS(i, len + 1);
            graph[pos][i] = 1;
            graph[i][pos] = 1;
        }
    }
     
}
void visited()
{
    int i, j;
    
    for (i = 0; i < Node; i++)
    {
        for (j = 0; j < Node; j++)
        {
            graph[i][j] = 0;
             
        }
    }
}

void solveCase()
{
	visited();
    int i,j;
    for (i = 0; i < Node; i++)
    {
        DFS(i, 0);
    }
    //DFS(0, 0);
     
}
void printCase()
{
    cout << maximum << endl;
}

int main()
{
    int i, j,x,y;
    //freopen("Text.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while (scanf("%d %d", &Node, &Edge) == 2)
    {
        if (!Node && !Edge)
            break;
		maximum = -1000000000;
        readCase();
        solveCase();
        printCase();
    }
    return 0;
}
