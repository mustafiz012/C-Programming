#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    int T, a, b, sum, temp = 0;
    cin >> T;
    while(T != 0)
    {
        sum = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++)
        {
            if( i%2 != 0 )
                sum += i;
        }
        temp++;
        printf("Case %d: %d\n", temp, sum);
        T--;
    }
}
