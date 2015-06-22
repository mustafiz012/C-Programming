#include<bits/stdc++.h>
using namespace std;

int main()
{
    char tex;
    long int counter =0;
    while(scanf("%c", &tex) != EOF)
    {
        if(tex == '"')
        {
            if(counter%2 == 0)
            {
                printf("``");
            }
            else if(counter%2 == 1)
            {
                printf("''");
            }
            counter++;
        }
        else
        {
            printf("%c", tex);
        }
    }
    return 0;
}
