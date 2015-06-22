#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, powrT2;
    while(scanf("%lld %lld", &n, &a) == 2){
            powrT2 = 0;
        for(int i =1; i<=n; i++){
            powrT2 += i*(pow(a, i));
        }
        printf("%d\n", powrT2);
    }
}
