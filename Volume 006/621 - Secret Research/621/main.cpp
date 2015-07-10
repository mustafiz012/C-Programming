#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    char s[2000];
    scanf("%d", &testCase);
    while(testCase--)
    {
        scanf("%s", s);
        int len = strlen(s);
        if(strcmp(s, "1") == 0 || strcmp(s, "4") == 0 || strcmp(s, "78") == 0)
            printf("+\n");
        else if(s[len-2] == '3' && s[len-1] == '5')
            printf("-\n");
        else if(s[0] == '9' && s[len - 1] == '4')
            printf("*\n");
        else printf("?\n");
    }
}
