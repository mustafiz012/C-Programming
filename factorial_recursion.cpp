#include<iostream>
#include<cstdio>
using namespace std;
int sum, N, T;
void recursion(int index)
{
    printf("%d\n", sum);
    if(index == 1)
    {
        printf("Factorial: %d\n", sum);
        return;
    }
    sum *= index;
    recursion(index-1);
}
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>N;
        sum = 1;
        recursion(N);
    }
    return 0;
}
