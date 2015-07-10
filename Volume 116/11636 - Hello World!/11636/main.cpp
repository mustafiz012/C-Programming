#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum, i, testCase = 1;
    while(1)
    {
        sum = 1;
        i = 0;
        scanf("%d", &n);
        if(n<0)
            break;
        while(sum != n)
        {
            if(sum >= (n-sum))
            {
                sum += (n-sum);
                i++;
            }
            else
            {
                sum += sum;
                i++;
            }
        }
        printf("Case %d: %d\n", testCase, i);
        testCase++;
    }
    return 0;
}
