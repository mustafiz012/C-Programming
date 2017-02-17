#include<iostream>
#include<cstdio>
using namespace std;
int sum, N, T;
void recursion(int index){
    if(index == N)
    {
        printf("%d\n", sum);
        return;
    }
    sum *= index;
    recursion(index+1);
}
int main()
{
    cin>>N;
    sum = 1;
    recursion(2);
    return 0;
}
