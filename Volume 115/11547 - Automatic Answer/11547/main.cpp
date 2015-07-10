#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase, n, result;
    scanf("%d", &testCase);
    while(testCase != 0)
    {
        result = 0;
        scanf("%d", &n);
        result = ((((((n*567)/9)+7492)*235)/47)-498);
        result %= 100;
        result /= 10;
        if(result < 0)
        {
            result *= -1;
            printf("%d\n", result);
        }
        else
            printf("%d\n", result);
        testCase--;
    }
    return 0;
}
