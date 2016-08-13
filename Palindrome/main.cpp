#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    while(1)
    {
        int pal, lim =0, numsizeArray[lim], divider =1;
        int flag = 0;
        cin>>pal;
        int tempPal = pal;
        while(pal)
        {
            pal = pal/10;
            lim++;
        }
        pal = tempPal;
        for(int i=1; i<=lim; i++)
        {
            numsizeArray[i] = (pal/divider)%10;
            divider *= 10;
        }
        for (int i=1; i<=lim; i++)
            printf("%d ",numsizeArray[i]);
        printf("\n");

        int tempLim = lim;
        tempLim++;
        for(int i =1; i<= (lim/2); i++)
        {
            int tt =0;
            tempLim--;
            for(int j = tempLim; j>=(lim/2); j--)
            {
                tt++;
                if(numsizeArray[i] == numsizeArray[j])
                {
                    printf("%d = %d\n", numsizeArray[i], numsizeArray[j]);
                    flag = 1;
                }
                else
                {
                    printf("%d = %d\n", numsizeArray[i], numsizeArray[j]);
                    flag = 0;
                }
                if(tt>=1)
                {
                    j--;
                    break;
                }
            }
        }
        if(flag == 1)
            printf("Palindrome\n");
        else
            printf("Not Palindrome\n");
    }
    return 0;
}
