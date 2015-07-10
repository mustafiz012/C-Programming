#include<stdio.h>
#include<string.h>

int main()
{
    char pStr[100];
    int length, i, mid;

    while (scanf("%s", pStr) != EOF)
    {
        length = strlen(pStr);
        mid = length / 2;
        int index = length - 1;
        for (i = 0; i < mid; i++)
        {
            if (pStr[i] != pStr[index - i])
            {
                printf("\nNot Palindrome!\n");
                break;
            }
            else
            {
                printf("\nPalindrome!\n");
                break;
            }
        }
    }




}
