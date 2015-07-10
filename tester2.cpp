<<<<<<< HEAD
#include<stdio.h>

int main()

{
    long long i,j,k,d,sum,num,t,n;
    while(scanf("%lld",&t)==1)
    {
        for(k=1; k<=t; k++)
        {
            scanf("%lld",&n);
            num=n;
            for(j=1; j!=0; j++)
            {
                sum=0;
                for(i=1; i!=0; i++)
                {
                    d=num%10;
                    num=num/10;
                    sum=sum+d*d;
                    if(num==0)
                    {
                        num=sum;
                        break;
                    }
                }
                if(num<=9)
                    break;
            }
            if(num==1 || num==7)
                printf("Case #%lld: %lld is a Happy number.\n",k,n);
            else
                printf("Case #%lld: %lld is an Unhappy number.\n",k,n);
        }
    }
=======
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int dec, bin2[100], bin[100], bin3[100], c, d, counter = 0, counter2 =0, toDec[100];
    cin>>dec;
    while(1)
    {
        for(int i=0;; i++)
        {
            bin[i] = dec%2;
            dec = dec/2;
            counter2++;
            if(dec == 0)
                break;
        }
        for(int i = 0; i < counter2; i++)
        {
            if(bin[i]>=0)
            {
                if(bin[i]>1)    break;
                else
                {
                    bin2[counter] = bin[i];
                    counter++;
                }
            }
        }
        for( c = counter - 1, d = 0; c >= 0; c--, d++ )
        {
            bin3[d] = bin2[c];
        }

        for( int j = 0; j < counter; j++ )
        {
            printf("%d", bin3[j]);
            toDec[j] = bin3[j];
        }
        printf("\n");
        int todec = 0;
        int m =0;
        while(counter != 0){
            todec += (toDec[m]*pow(2,(counter-1)));
            counter--;
            m++;
        }
        printf("%d\n", todec);
        if(dec == 0)
            break;
    }
    return 0;
>>>>>>> bde11a53e1786c1ac1ba008b66106ad5ca279d35
}
