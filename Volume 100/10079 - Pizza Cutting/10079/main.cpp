#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int high, n;
    while(1){
        scanf("%lld", &n);
        if(n<0)
            break;
        //high = n*(n+1)/2+1;
        high = (n*n+n+2)/2;
        printf("%lld\n", high);
    }
    return 0;
}
