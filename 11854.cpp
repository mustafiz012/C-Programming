#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l1, l2, l3;
    while(scanf("%d%d%d", &l1, &l2, &l3) != EOF)
    {
        if(l1 == 0 && l2 == 0 && l3 == 0)
            break;
        if(l1<=0 || l2<=0 || l3<=0)
            printf("wrong\n");
        else if(l1*l1 == l2*l2+l3*l3)
            printf("right\n");
        else if(l2*l2 == l1*l1+l3*l3)
            printf("right\n");
        else if(l3*l3 == l1*l1+l2*l2)
            printf("right\n");
        else
            printf("wrong\n");
    }
}
