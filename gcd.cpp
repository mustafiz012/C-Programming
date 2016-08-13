#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n1,n2, gcdd = 0, minn, maxx;
    cin>>n1>>n2;
    if(n1>n2)
    {
        minn = n2;
        maxx = n1;
    }
    else
    {
        minn = n1;
        maxx = n2;
    }
    for(int i=1; i<=minn; i++)
    {
        if(maxx%i == 0)
            gcdd = i;
    }
    printf("GCD: %d", gcdd);
    return 0;
}

