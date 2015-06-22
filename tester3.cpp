#include<bits/stdc++.h>
using namespace std;

int main()
{
    int dec = 0, counter;
    int bin3[100];
    cin>>counter;
    for(int j=0; j<counter; j++)
    {
        cin>>bin3[j];
    }
    int i=0;
    while(counter != 0)
    {
        if(bin3[i] == 1)
        {
            dec += pow(2,counter-1);
        }
        i++;
        counter--;
    }
    printf("\n%d ", dec);
}
