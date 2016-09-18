#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    while(1)
    {
        int input, n=0;
        cin>>input;
        for(int i=0; ; i++)
        {
            if(input == 1)
                break;
            if(input/2 == 1)
            {
                n++;
                break;
            }
            else
            {
                input /= 2;
                n++;

            }
        }
        printf("N = %d\n", n);
    }
    return 0;
}
