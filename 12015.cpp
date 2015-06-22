#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int T, reli[100], maxx;
    char str[10][100];
    cin>>T;
    int tempT = 1;
    while(T != 0)
    {
        maxx = -1;
        for(int i = 0; i < 10; i++)
        {
            //gets(str);
            scanf("%s %d", str[i], &reli[i]);
            maxx = max(maxx, reli[i]);
        }
        printf("Case #%d:\n", tempT);
        for(int j = 0; j<10; j++)
        {
            if(maxx == reli[j]){
                printf("%s\n", str[j]);
            }
        }
        tempT++;
        T--;
    }
}
