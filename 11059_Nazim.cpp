#include<bits/stdc++.h>
#define ri(N) scanf("%lld",&N)
using namespace std;
long long int A[18];

long long int total, sum;
long long int  t=0, n;

int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    while(ri(n)!=EOF)
    {
        for(int i=0; i<n; i++)
            ri(A[i]);

            total=0;
            for(int i=1;i<=n;i++)
            {
                for(int b=0;b<=n-i;b++)
                {
                    sum=1;
                    for(int j=b;j<b+i;j++)
                    {
                        sum*=A[j];
                    }
                    total=max(sum,total);
                }
            }
           if(total<0)
                total=0;
            printf("Case #%lld: The maximum product is %lld.\n\n",++t,total);
    }

    return 0;
}
