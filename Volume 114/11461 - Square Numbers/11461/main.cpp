#include <iostream>
#include <cstdio>
#include<cmath>

using namespace std;

int main()
{
    int lower, upper, rUpper, rLower, counter;
    while(1){
        //freopen("input.txt", "r", stdin);
        //cin>>lower>>upper;
        scanf("%d%d",&lower, &upper);
        if(lower==0 && upper == 0)
            break;
        else{
            counter = 0;
            rLower = sqrt(lower);
            rUpper = sqrt(upper);
            for(int i=rLower; i<=rUpper; i++){
                    for(int j = upper; j>=lower; j--){
                        if(i*i == j)
                            {
                                counter++;
                                break;
                            }
                }
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}
