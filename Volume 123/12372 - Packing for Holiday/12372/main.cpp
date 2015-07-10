#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase, L, W, H, i = 1;
    scanf("%d", &testCase);
    while(testCase--){
        scanf("%d%d%d", &L, &W, &H);
        if(L <= 20 && W <= 20 && H <= 20)
            printf("Case %d: good\n", i);
        else
            printf("Case %d: bad\n", i);
        i++;
    }
    return 0;
}
