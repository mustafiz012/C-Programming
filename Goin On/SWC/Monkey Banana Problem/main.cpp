#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, N;
int input[101][33222], done[101][33222];
int temp;

void calculation(int i, int j, int cnt)
{
    if (j<0 || j>N)
		return;
	if (i == ((2 * N) - 1))
	{
		if (cnt > Ans)
			Ans = cnt;
		return;
	}
	if (i >= N)
	{
		calculation(i + 1, j, cnt + input[i + 1][j]);
		calculation(i + 1, j - 1, cnt + input[i + 1][j - 1]);
	}
	else
	{
		calculation(i + 1, j, cnt + input[i + 1][j]);
		calculation(i + 1, j + 1, cnt + input[i + 1][j + 1]);
	}
}

int main()
{
    //freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        Ans = 0;
        int ii = 0;
        bool flag = false;
        for (int i = 0; i < 2 * N - 1; i++)
            for (int j = 0; j < 2 * N - 1; j++)
                input[i][j] = 0;
        for (int i = 0; i < 2 * N - 1; i++)
        {
            if (flag) ii--;
            else ii++;
            if (i == N - 1) flag = true;
            for (int j = 0; j < ii; j++)
            {
                scanf("%d", &input[i][j]);
            }
        }
        calculation(0, 0, input[0][0]);
        printf("%d\n", Ans);
        /*bool flagTemp = false;
        for (int i = 0; i < 2 * N - 1; i++) {
        if (flagTemp) ii--; else ii++; if (i == N - 1) flagTemp = true;
        int j;
        for (j = 0; j < ii - 1; j++) {
        printf("%d ", input[i][j]);
        if (input[i][j] != 0)
        temp = input[i][j];
        }printf("\n");
        }*/

        //cin >> N;
    }
    return 0;
}
