#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    int T, cases = 0;
    //freopen("in.txt","r", stdin);
    freopen("input.txt", "r", stdin);
    cin>>T;
    while(T--)
    {
        cases++;
        int sm, up, nom, minNom, input;
        cin>>sm>>up>>nom>>minNom;
        int counter = (up-sm)+1;
        int storeCounter = counter;
        int nomArray[nom];
        for(int k = 0; k<nom; k++)
        {
            cin>>nomArray[k];
        }

        while(storeCounter--)
        {
            input = sm;
            int tempInput = input;
            int digits = 0, divider = 1;
            while(input)
            {
                input = input/10;
                digits++;
            }

            input = tempInput;
            int inputArray[digits];
            for(int i=0; i<digits; i++)
            {
                inputArray[i] = (input/divider)%10;;
                divider *= 10;
            }
            int counter2 =0;
            for(int j =0; j<digits; j++)
            {
                for(int l = 0; l<nom; l++)
                {
                    if(nomArray[l] == inputArray[j])
                        counter2++;
                    if(counter2 >= minNom)
                        break;
                }
                if(counter2 >= minNom)
                    {
                        counter--;
                        break;
                    }
            }
            sm++;
        }
        printf("Case %d:%ld\n",cases, counter);
    }
}
