#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF)
    {
        int n1 = n;
        int m1 = m;
        int MC = 0, C;
        if(n > m) swap(n, m);
        while(n <= m)
        {
            unsigned int i = n;
            C = 1;
            while(i != 1)
            {
                if(i%2 != 0)
                    i = 3*i+1;
                else
                    i >>= 1;
                C++;
            }
            if(C > MC)
                MC = C;
            n++;
        }
        printf("%d %d %d\n", n1, m1, MC);
    }
    return 0;
}
