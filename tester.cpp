#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1, b = 1, c, n;
    cin>>n;
    printf("%d %d ", a, b);
    for(int i=2; i<n-1; i++)
        {
            c = a+b;
            printf("%d ", c);
            a = b;
            b = c;
        }
}

