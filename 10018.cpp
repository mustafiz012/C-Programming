#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long counter, cRev, cRem, p, cTemp, n;
    cin>>n;
    while(n != 0)
    {
        cin>>p;
        counter = 0;
        while(1)
        {
            cTemp = p;
            cRev = 0;
            while(cTemp != 0)
            {
                cRem = cTemp % 10;
                cRev = cRev * 10 + cRem;
                cTemp = cTemp / 10;
            }
            if(p == cRev)
            {
                printf("%lld %lld\n", counter, p);
                break;
            }
            else
            {
                p += cRev;
                counter++;
            }
        }
        n--;
    }
    return 0;
}
