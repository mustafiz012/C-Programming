#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

long long summ(long long n)
{
    long long dig =0;
    while(n!=0)
    {
        dig += (n%10);
        n /= 10;
    }
    if(dig>=10)
        summ(dig);
    else
        return dig;
}

int main()
{
    long long n, result;
    while(1)
    {
        //cin>>n;
        scanf("%lld", &n);
        if(n == 0)
            break;
        if(n>=10)
        {
            result = summ(n);
            printf("%lld\n", result);
        }
        else
        {
            printf("%lld\n", n);
        }
    }
    return 0;
}
