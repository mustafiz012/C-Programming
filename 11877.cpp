#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    int n, rem, res, total;

    while(scanf("%d", &n) && n)
    {
        total = 0;
        while(n >= 3 )
        {
            rem = n%3;
            res = n/3;
            total += res;
            n = res + rem;
        }
        if(n == 2)
            printf("%d\n", total+1);
        else
            printf("%d\n", total);
    }
    return 0;
}
