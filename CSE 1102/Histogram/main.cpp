#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1000], c;
    int i, counter;
    gets(ch);
    printf("\nChar:\tValue:\n");
    while (1)
    {
        counter = 0;
        i =0;
        scanf("%c", &c);
        getchar();
        while(ch[i] != '\0')
        {
            if(ch[i] == c)
            {
                counter++;
            }
            i++;
        }
        printf("%c\t%d\n",c, counter);
    }
    return 0;

}
