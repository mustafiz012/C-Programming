#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, total, temp = 0, len;
    char input[100];
    cin >> T;
    while(T != 0)
    {
        total = 0;
        gets(input);
        len = strlen(input);
        if(len == 0) continue;
        for(int i = 0; i <= len; i++)
        {
            if(input[i] == 'a' || input[i] == 'w' || input[i] == 't' || input[i] == 'p' || input[i] == 'm' || input[i] == 'j' || input[i] == 'g' || input[i] == 'd' || input[i] == ' ')
            {
                total += 1;
            }
            if(input[i] == 'b' || input[i] == 'x' || input[i] == 'u' || input[i] == 'q' || input[i] == 'n' || input[i] == 'k' || input[i] == 'h' || input[i] == 'e')
            {
                total += 2;
            }
            if(input[i] == 'c' || input[i] == 'y' || input[i] == 'v' || input[i] == 'r' || input[i] == 'o' || input[i] == 'l' || input[i] == 'i' || input[i] == 'f')
            {
                total += 3;
            }
            if(input[i] == 's' || input[i] == 'z')
            {
                total += 4;
            }
        }
        temp++;
        printf("Case #%d: %d\n", temp, total);
        T--;
    }
    return 0;
}
