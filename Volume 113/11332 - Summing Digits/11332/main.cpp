#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long sum, tempN, n;
    while(1)
    {
        scanf("%lld", &n);
        sum = 0;
        if( n == 0)
            break;
        while(n != 0)
        {
            sum += (n%10);
            n = n/10;
            if(n == 0)
            {
                if(sum >= 10)
                    {
                        n = sum;
                        sum = 0;
                    }
                else
                    break;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
