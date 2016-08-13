#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a[6][6], sum =0;
    for(int i=0; i<6; i++){
        for(int j =0; j<6; j++){
            cin>>a[i][j];
            //sum += a[i][j];
        }
    }

    int finalSum =0;

    for(int i=0; i<4; i++){
        for(int j =0; j<4; j++){
            sum = a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+2]+a[i+2][j+2];
            if(sum>=finalSum)
        {
            finalSum = sum;
            sum = 0;
        }
        else
            sum = 0;
        }

    }

    printf("%d", finalSum);

    return 0;
}
