#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ev1, ev2, AT, D;
    while(1)
    {
        cin>>ev1>>ev2>>AT>>D;
        if(ev1 == 0 && ev2 == 0 && AT == 0 && D == 0)
            break;
        while(1)
        {
            if(AT<=1)
            {
                ev2 = ev2+D;
                ev1 = ev1-D;
            }
            else{
                ev2 = ev2-D;
                ev1 = ev1+D;
            }
            if(ev1<=0){
                printf("%d\n", ev2);
                break;
            }
            if(ev2 <= 0){
                printf("%d\n", ev1);
                break;
            }
        }
    }
    return 0;
}
