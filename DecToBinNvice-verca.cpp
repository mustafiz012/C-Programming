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
        if(todec >= 10){
            printf("%c", 65+(todec-10));
            break;
        }
        printf("%d\n", todec);
        if(dec == 0)
            break;
    }
    return 0;
}
