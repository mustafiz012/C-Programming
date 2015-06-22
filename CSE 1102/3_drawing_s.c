# include<stdio.h>
int main ()
{
    int i,j,n;
    printf("Enter the size:\n");
    scanf("%d", &n);
    printf("\n");
    for(i = 0; i < n; i++)
    {
        if(n%2==0){
                printf("No middle point found!\n");
            break;
        }
        for(j = 0; j < n; j++)
        {
            if(j == n/2 && i == n/2)
                printf("O ");
            else
                printf("S ");
        }
        printf("\n");
    }
    return 0;
}
