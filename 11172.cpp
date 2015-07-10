#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    int t, a, b;
    scanf("%d", &t);
    while( t != 0 ){
        scanf("%d%d", &a, &b);
        if( a > b )
            printf(">");
        else if(a < b)
            printf("<");
        else
            printf("=");

        printf("\n");
        t--;
    }
}
