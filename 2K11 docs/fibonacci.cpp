#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(EOF){
        long long a = 1, b = 1, c, n, aa;
    cin>>n;
    //printf("%d %d ", a, b);
    for(int i=1; i<=n; i++)
        {
            if(i == n)
                aa = a;
            //printf("%lld ", a);
            c = a+b;
            a = b;
            b = c;
        }
        printf("%lld \n", aa);
    }
}
