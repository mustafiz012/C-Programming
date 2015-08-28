#include<iostream>
#include<cstdio>
#include<cmath>
//#include <string>
#include <cstring>
using namespace std;

int main()
{
    int input,x;
    cin>>x;
    int part1=1,part2=1,value=0,total=1;
    while(x--)
    {
        cin>>input;
        if(input<0)
        {
            if(value==0)
            {
                part1=input;
                value++;
            }
            else
            {
                part2=input;
                total=total*part1*part2;
                part1=1;
                part2=1;
                value=0;
            }
        }
        else if(input>0)
            total=total*input;
        else
        {
            total =0;
            break ;
        }

    }

    cout<<" total multiplication is "<<total <<endl;

    return 0;
}
