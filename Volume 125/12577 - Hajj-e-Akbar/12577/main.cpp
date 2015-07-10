#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 1;
    char ch[13];
    while(1)
    {
        gets(ch);
        if(strcmp(ch, "*") == 0)
            break;
        else if(strcmp(ch,"Hajj") == 0)
            printf("Case %d: Hajj-e-Akbar\n", i);
        else if(strcmp(ch,"Umrah") == 0)
            printf("Case %d: Hajj-e-Asghar\n", i);
        i++;
    }
    return 0;
}
