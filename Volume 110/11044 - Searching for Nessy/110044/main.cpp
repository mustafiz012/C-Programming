#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, t;
    long long ans;
    scanf("%d", &t);
    while( 1 )
    {
        if(t <= 0)
            break;
        ans = 0;
        scanf("%d%d", &n, &m);
        ans = (n/3)*(m/3);
        printf("%lld\n", ans);
        t--;
    }
    return 0;
}
