#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch[1000050];
    int testCase = 1;
    while(scanf("%s", ch) != EOF)
    {
        if(strlen(ch) == 0)
            break;
        printf("Case %d:\n", testCase);
        long N, i, j, k;
        scanf("%ld", &N);
        while(N--)
        {
            scanf("%ld%ld",&i,&j);
            if(i>j) swap(i,j);
            for(k = i; k < j; k++)
                {
                    if(ch[k] != ch[k+1]){
                        printf("No\n");
                        break;
                    }
                }
                if(k == j)
                    printf("Yes\n");
        }
        testCase++;
    }
    return 0;
}
