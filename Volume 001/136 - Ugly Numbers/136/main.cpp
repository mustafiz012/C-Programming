#include <bits/stdc++.h>

using namespace std;

int main()
{
    long i, k = 1;
    for(i = 2;;i++){
        if(i%2 == 0 || i%3 == 0 || i%5 == 0)
            k++;
        if(k == 1500)
            break;
    }
    printf("The 1500'th ugly number is %ld.", i);
    return 0;
}
