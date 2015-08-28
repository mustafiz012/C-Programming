#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, result;
    while(scanf("%d", &n) != EOF)
    {
        result = 1;
        if(n > 7 && n < 14 && n != 13)
        {
            while(n != 0)
            {
                result *= n;
                n--;
            }
            printf("%d\n", result);
        }
        else if(n==13) printf("6227020800\n");
        else if(n >= 14 || (n < 0 && (abs(n))%2 != 0))
            printf("Overflow!\n");
        else if(n < 8 || (n < 0 && (abs(n))%2 == 0))
            printf("Underflow!\n");

    }
    return 0;
}
