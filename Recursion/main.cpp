#include <iostream>
#include <cstdio>
using namespace std;
int summ(int n){
    n;
    if(n == 0)
        return n;
    else{
        return n+summ(n-1);
    }
}

int factorial(int n){
    if(n == 1)
        return n;
    else
        return n*factorial(n-1);
}

int cal(int n){
    n =1;
    int sums = 0;
    while(n <= 100)
        {
            sums += ((4*n)+1);
            n++;
        }
        printf("%d\n",sums);
}

int main()
{
    printf("This is recursion start point\n");
    int num, summation, fact = 1;
    cin>>num;
    //summation using recursion
    summation = summ(num);
    fact = factorial(num);
    cal(num);
    printf("Summation: %d\n", summation);
    printf("Factorial: %d\n", fact);

    return 0;
}
