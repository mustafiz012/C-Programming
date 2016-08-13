#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    char ch;
    int temp, sum = 0;
    FILE *fp;
    if((fp=fopen("tester.txt", "r")) ==NULL)
    {
        printf("cannot open the file");
        exit(1);
    }
    else
    {
        while((ch = fgetc(fp)) != EOF)
        {
            if(ch == ' ' || ch == '\n')
                continue;
            //printf("%c", ch);
            temp = ch-'0';
            sum += temp;
        }
    }

    printf("%d ", sum);
    return 0;
}
