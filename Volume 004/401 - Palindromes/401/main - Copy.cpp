#include <iostream>
#include<cstdio>
using namespace std;

int main2()
{
    printf("This is palindrome testing\n");
    char arr[100];
    while(1)
    {
        gets(arr);
        int length = 0, counter, j, counter2, counter3 =0;
        for(int i=0; arr[i] != '\0'; i++)
        {
            length++;
        }
        counter = 1;
        char a, b;
        int jj, ii;
        for(int i=0; i<length/2; i++)
        {
            counter2 = 0;
            counter3++;
            for(j=length-1; j>length/2; j--)
            {
                counter2++;
                if(counter2 == counter3)
                {
                    if(arr[i] != arr[j])
                    {
                        counter = 0;
                        break;
                    }
                }
            }
            if(counter == 0)
            {
                printf("Not palindrome\n");
                break;
            }
        }
        if(counter ==1)
            printf("Palindrome\n");
    }
    return 0;
}
