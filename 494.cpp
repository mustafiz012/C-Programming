#include<bits/stdc++.h>
using namespace std;

int main()
{
    char chr[1000];
    int counter;
    while(1)
    {
        counter = 0;
        scanf("%[^\n]s",chr);
        int T = strlen(chr);
        while(T != 0)
        {
            for(int i =0; i < T; i++){
                if(strcmp (chr[i], " ") == 0 ) counter++;
            }
            T--;
        }
        printf("%d\n", counter);
    }
}
