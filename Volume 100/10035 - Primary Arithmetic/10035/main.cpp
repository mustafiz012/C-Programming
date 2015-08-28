#include<bits/stdc++.h>
using namespace std;

int main()
{
    long unsigned i,num1,num2,sum;
    while(scanf("%lu%lu",&num1,&num2)==2)
    {
        long unsigned carry=0,rem=0;;
        if(num1==0 && num2==0) break;
        while(1)
        {
            if(num1 == 0 && num2 == 0)
                break;
            sum=(num1%10)+(num2%10)+rem;
            if(sum>9)
            {
                carry++;
                rem=1;
            }
            else
                rem=0;
            num1/=10;
            num2/=10;

        }

        if (carry==0)
            printf("No carry operation.\n");
        else if (carry==1)
            printf("1 carry operation.\n");
        else
            printf("%lu carry operations.\n",carry);
    }
    return 0;
}
