#include <stdio.h>

int main()
{
    int a,b,c,d,degree; //degree = 3*360;
    while (1)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
<<<<<<< HEAD
        if ( a == 0 && b == 0 && c == 0 && d == 0 )
=======
        if (a == 0 && b == 0 && c == 0 && d == 0)
>>>>>>> bde11a53e1786c1ac1ba008b66106ad5ca279d35
            break;
        degree = 1080;
        if(a<b)
            degree+=(40-b+a)*9;
        else
            degree+=(a-b)*9;
        if(b>c)
            degree+=(40-b+c)*9;
        else
            degree+=(c-b)*9;
        if(c<d)
            degree+=(40-d+c)*9;
        else
            degree+=(c-d)*9;
        printf("%d\n",degree);
    }
    return 0;
}
