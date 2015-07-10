#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[15];
    int testCase =1;
    while(1)
    {
        gets(ch);
        if(ch[0] == '#' && ch[1] == '\0')
            break;
        else if(strcmp(ch,"HELLO") == 0)
            printf("Case %d: ENGLISH\n", testCase);
        else if(strcmp(ch,"HOLA") == 0)
            printf("Case %d: SPANISH\n", testCase);
        else if(strcmp(ch,"HALLO") == 0)
            printf("Case %d: GERMAN\n", testCase);
        else if(strcmp(ch,"BONJOUR") == 0)
            printf("Case %d: FRENCH\n", testCase);
        else if(strcmp(ch,"CIAO") == 0)
            printf("Case %d: ITALIAN\n", testCase);
        else if(strcmp(ch,"ZDRAVSTVUJTE") == 0)
            printf("Case %d: RUSSIAN\n", testCase);
        else printf("Case %d: UNKNOWN\n", testCase);
        testCase++;
    }
    return 0;
}
