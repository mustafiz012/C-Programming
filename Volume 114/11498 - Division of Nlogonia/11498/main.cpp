#include <bits/stdc++.h>

using namespace std;

int main()
{
    long testCase, n, m, n1, m1;
    while(1){
        scanf("%ld",&testCase);
        if(testCase == 0)
            break;
        scanf("%ld%ld", &n, &m);
        for(int i =0; i<testCase; i++){
            scanf("%ld%ld", &n1, &m1);
            if(n1 == n || m1 == m)
                printf("divisa\n");
            else if(n1>n && m1>m)
                printf("NE\n");
            else if(n1<n && m1<m)
                printf("SO\n");
            else if(n1>n && m1<m)
                printf("SE\n");
            else printf("NO\n");
        }
    }
    return 0;
}
