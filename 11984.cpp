#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, tmp;
    double C, d;
    scanf("%d", &T);
    tmp = T;
    T = 1;
    while(tmp != 0)
    {
        scanf("%lf%lf", &C, &d);
        d = (5*d)/9;
        C = C + d;
        printf("Case %d: %.2lf\n", T, C);
        tmp--;
        T++;
    }
    return 0;
}
