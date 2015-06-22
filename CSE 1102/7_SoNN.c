#include<stdio.h>

int sumOfNatural(int n)
{
    while(n != 0)
        return n + sumOfNatural(n - 1);   //calling itself
}

int main()
{
    int i, inputNum, sum = 0;
    printf("Positive value: \n");
    while(scanf("%d", &inputNum) != EOF)
    {
        sum = sumOfNatural(inputNum);
        printf("summation: %d\n", sum);
    }
    return 0;
}



