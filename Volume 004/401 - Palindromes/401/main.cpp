#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    printf("This is palindrome testing\n");
    char arr[35];
    while(gets(arr))
    {
        //gets(arr);
        int length = 0, counter, j, counter2, counter3 =0;
        bool flag = true;
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
//                counter2++;
//                if(counter2 == counter3)
//                {
//                    if(arr[i] != arr[j])
//                    {
//                        counter = 0;
//                        break;
//                    }
//                }
//            }
//            if(counter == 0)
//            {
//                printf("Not palindrome\n");
//                break;
//            }
                if(arr[i] != arr[length-i-1])
                {
                    flag = false;
                    break;
                }
            }
            if(flag == true)
                {
                    printf("Palindrome\n");
                    break;
                }else{
                    printf("Not Palindrome\n");
                    break;
                }

        }
    }
    return 0;
}
