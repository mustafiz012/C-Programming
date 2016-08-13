#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long T, N, M, sum;
    cin>>T;
    while(T--){
        cin>>N>>M;
        sum = 0;
        long long a =0, b =1, c, storeFib[M];
        storeFib[1] = b;
        for(int i =2; i<=M; i++){
            c = a+b;
            a = b;
            b = c;
            c = c%100;
            //printf("%d ", c);
            storeFib[i] = abs(c);
        }
        for(int j = N; j<=M; j++){
            //printf("%lld ", storeFib[j]);
            sum += storeFib[j];
        }
        printf("%lld\n", sum);
    }
    return 0;
}
