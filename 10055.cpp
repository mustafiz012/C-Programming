#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    long long hNum, oNum, sub;
    while(scanf("%lld%lld", &hNum, &oNum) != EOF)
    {
        sub = oNum - hNum;
        if(sub < 0)
        {
            sub *= -1;
        }
        printf("%lld\n", sub);
    }

    return 0;
}
