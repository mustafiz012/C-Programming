#include <bits/stdc++.h>
using namespace std;

int main()
{
    char inp[1000];
    while ( scanf("%s",inp) != EOF )
    {
          char c=getchar();
          int len = strlen(inp)-1;
          for( int i = len; i>=0; i-- )
            putchar(inp[i]);
          putchar(c);
    }
    return 0;
}
