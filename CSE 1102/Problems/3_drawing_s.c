# include<stdio.h>

int main ()
{
    int i,j,n;
    printf("Enter the size:\n");
    while( scanf("%d", &n) != EOF)
    {
        printf("\n");
        if(n%2 == 0)
            printf("Not too much accurate!\n\n");
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(j == n/2 && i == n/2)
                    printf("O ");
                else
                    printf("S ");
            }
            printf("\n");
        }
    }

    return 0;
}
