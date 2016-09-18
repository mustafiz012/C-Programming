#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    printf("This is a string problem.\n");
    char inputString[1000];
    int counter, m, i;
    while(1)
    {
        gets(inputString);
        if(inputString[0] == '#')
            break;
        else
        {
            counter =0;
            for(i=0; inputString[i] != '\0'; i++)
            {
                for(int j=i+1; inputString[j] != '\0'; j++)
                {
                    if(inputString[i]<inputString[j])
                        counter++;
                }
            }

            if(counter==0)
                printf("No Successor\n");
            else
            {
                char temp;
                int flag = 0;
                for(m = i - 1; m>=0; m--)
                {
                    for(int n = m-1; n>=0; n--)
                    {
                        if(inputString[m]>inputString[n])
                        {
                            flag = 1;
                            temp = inputString[m];
                            inputString[m] = inputString[n];
                            inputString[n] = temp;
                            break;
                        }
                    }
                    if(flag == 1)
                        break;
                }
                puts(inputString);
            }

        }
    }

    return 0;
}
