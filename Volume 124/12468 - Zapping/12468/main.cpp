#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, d, press;
    while(1){
        scanf("%d%d", &c, &d);
        press = 0;
        if(c == -1 && d == -1)
            break;
        else{
                if(d >= 50 && c <= 50 && abs((100 - d) + abs(0 - c)) < abs(c-d))
                        press = abs((100 - d) + abs(0 - c));
                else if(c >= 50 && d <= 50 && abs((100 - c) + abs(0 - d)) < abs(c-d))
                        press = abs((100 - c) + abs(0 - d));
                else
                    press = abs(d - c);
        }
        printf("%d\n", press);
    }
    return 0;
}
