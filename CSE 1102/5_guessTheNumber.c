#include<stdio.h>

int main()
{
    int ranNum, check, counter = 0;
    srand(time(NULL));
    ranNum = rand() % 20 + 1;  //1 - 20
    //ranNum = rand() % 10 + 1;  //1 - 10
    //ranNum = rand() % 100 + 1;  //1 - 100

    while(check != ranNum){
        scanf("%d", &check);
            counter++;
        if(check > ranNum)
            printf("Checking number is higher than random one!\n");
        else if(check < ranNum)
            printf("Checking number is lower than random one!\n");
    }
    printf("Test %d : Your guessed number is correct now!!\n", counter);
    return 0;
}
