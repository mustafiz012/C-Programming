#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, donation, total = 0;
    char str1[6];
    cin>>T;
    while(T != 0)
    {
        scanf("%s", str1);
        if( strcmp (str1, "donate") == 0 )
        {
            cin>>donation;
            total += donation;
        }
        else
        {
            printf("%d\n", total);
        }
        T--;
    }
    return 0;
}
