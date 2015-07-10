#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, temp, result, rem, tempN, testCase, i = 1;
    scanf("%lld", &testCase);
    while( testCase-- )
    {
        scanf("%lld", &n);
        tempN = n;
        rem = 0;
        while(1)
        {
            if(n>10)
            {
                while(n!=0)
                {
                    rem = n%10;
                    result += rem*rem;
                    temp = n/10;
                    n = temp;
                }
                n = result;
            }
            else if(n == 10)
            {
                n = 1;
                break;
            }
            else
            {
                result = n*n;
                n = result;
            }
            if(n < 10)
            {
                n = result;
                break;
            }
            result = 0;
        }
        if(n == 1)
            printf("Case #%lld: %lld is a Happy number.\n", i, tempN);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n", i, tempN);
        result = 0;
        i++;
    }
    return 0;
}
