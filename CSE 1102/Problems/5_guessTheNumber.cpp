#include<stdio.h>

int main()
{
    int ranNum, check;
    srand(time(NULL));
    ranNum = rand() % 20 + 1;  //1 - 20
    //ranNum = rand() % 10 + 1;  //1 - 10
    //ranNum = rand() % 100 + 1;  //1 - 100

    while(check != ranNum){
        scanf("%d", &check);
        if(check > ranNum)
            printf("Checking number is higher than random one!\n");
        else if(check < ranNum)
            printf("Checking number is lower than random one!\n");
    }
    printf("Your guessed number is correct now!!\n");
    return 0;
}
