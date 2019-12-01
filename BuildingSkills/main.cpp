//calculating factorial using recursion

#include<iostream>
#include<cstdio>
using namespace std;
int result = 1;
void doRecursion(int n)
{
    if(n==1)
    {
        printf("Result: %d", result);
        return;
    }
    result *=n;
    doRecursion(n-1);
}
int main()
{
    int factorial;
    cin>>factorial;
    doRecursion(factorial);
    return 0;
}
