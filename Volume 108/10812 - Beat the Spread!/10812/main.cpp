#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, d, finall, t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d", &s, &d);
        if(d>s || (s-d)%2 != 0)
            printf("impossible\n");
        else
            printf("%d %d\n", (s+d)/2, abs((s-d)/2));
    }
    return 0;
}
