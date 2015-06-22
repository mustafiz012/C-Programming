#include<stdio.h>

int main()
{
    int i, j, n, k;
    while( scanf("%d", &n) != EOF )
    {
        int temp = n;
        for(i = 0; i<= temp; i++)
        {
            for(k = 0; k < n; k++)
            {
                printf(" ");
            }
            if(i % 2 != 0)
            {
                for(j = 0; j < i; j++)
                {
                    if(j % 2 == 0)
                        printf("* ");
                    else
                        printf("A ");
                }
            }
            printf("\n");
            n--;
        }
    }
}
