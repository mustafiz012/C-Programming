#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long int u, t, d;
    while(scanf("%ld%ld", &u, &t) != EOF){
        d = 2*u*t;
        printf("%ld\n", d);
    }

    return 0;
}
