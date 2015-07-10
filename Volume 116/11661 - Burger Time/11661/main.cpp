#include <bits/stdc++.h>

using namespace std;

int main()
{
    int L, tempD, tempR, minn;
    string ch;
    while(scanf("%d", &L))
    {
        tempR = tempD = -L;
        minn = L;
        if(L == 0)
            break;
        cin>>ch;
        for(int i =0; i<L; i++)
        {
            if(ch[i] == 'D')
            {
                minn = min((i-tempR), minn);
                tempD = i;
            }
            else if(ch[i] == 'R' )
            {
                minn = min((i - tempD), minn);
                tempR = i;
            }
            else if(ch[i] == 'Z')
            {
                minn = 0;
                break;
            }
        }
        printf("%d\n",minn);
    }
    return 0;
}
