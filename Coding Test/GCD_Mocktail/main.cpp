#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int powering(int base, int poww)
{
    int result = 1;
    while(poww--)
    {
        result *= base;
    }
    return result;
}
int main()
{
//    int T;
//    cin>>T;
//    while(T--)
//    {
// 1 1 1 1 2 1 1 1 3
        int n;
        freopen("input.txt","r", stdin);
        cin>>n;
        int arr[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
                //printf("%d ", arr[i][j]);
            }
            //printf("\n");
        }

        for(int i =0; i<4; i++)
        {
            //printf("hello %d\n", sss);
            int sum = 0;
            for(int k=0; k<n; k++)
            {
                //printf("hello %d\n", k);
                for(int j=0; j<n; j++)
                {
                    //printf("hello %d\n", j);
                    //printf("base: [%d][%d]: %d\n", k,j, arr[k][j]);
                    sum += powering(arr[k][j], i);
                }
            }
            printf("%d\n", sum);
        }
    //}
    return 0;
}
