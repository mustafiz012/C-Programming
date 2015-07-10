#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, sf, na, nf, premium;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &N);
        premium = 0;
        while(N--){
            scanf("%d%d%d", &sf, &na, &nf);
            premium += (sf*nf);
        }
        printf("%d\n", premium);
    }
    return 0;
}
