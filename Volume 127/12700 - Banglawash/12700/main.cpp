#include <bits/stdc++.h>
#define forr(a, b) for(int i = (a); i < (b); i++)

using namespace std;

int main()
{
    int T, testCase = 1, N;
    char ch[12];
    scanf("%d",&T);
    while(T--)
    {
        int counter1 = 0, counter2 = 0, Dcounter = 0;
        scanf("%d", &N);
        int temp = N;
        forr(0, temp)
        {
            cin>>ch[i];
        }
        printf("Case %d: ", testCase);
        forr(0, temp)
        {
            if(ch[i] == 'B')    counter1++;
            else if(ch[i] == 'W')    counter2++;
            else if (ch[i] == 'A')  N--;
            else if(ch[i] == 'T')   Dcounter++;
        }
        if(counter1 > counter2 && counter1 != N )
            printf("BANGLADESH %d - %d\n", counter1, counter2);
        else if(counter1 < counter2 && counter2 != N)
            printf("WWW %d - %d\n", counter2, counter1);
        else if(counter1 == N && counter2 == 0 && !(N <= 0))
            printf("BANGLAWASH\n");
        else if(counter2 == N && counter1 == 0 && !(N <= 0))
            printf("WHITEWASH\n");
        else if(counter1 == counter2 && !(N <= 0))
            printf("DRAW %d %d\n", counter1, Dcounter);
        else if(counter1 == 0 && counter2 == 0)
            printf("ABANDONED\n");
        else if(N <= 0)
            printf("ABANDONED\n");

        testCase++;
    }
    return 0;
}
