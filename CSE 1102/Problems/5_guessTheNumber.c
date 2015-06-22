#include<stdio.h>

int main()
{
    int ranNum, check, testCase;
    // srand(time(NULL));
    printf("Up to which number u want to make random number:\n ");
    scanf("%d", &testCase);
    ranNum = rand() % testCase + 1;

    while(check != ranNum)
    {
        printf("\nInsert number between 1 to %d:\n",testCase);
        scanf("%d", &check);
        if(check > ranNum)
            printf("Checking number is higher than random one!\n");
        else if(check < ranNum)
            printf("Checking number is lower than random one!\n");
    }
    printf("Your guessed number is correct now!!\n");
    return 0;
}
