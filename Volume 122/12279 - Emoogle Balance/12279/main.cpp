#include <bits/stdc++.h>
#define forr(m, n) for(int i=(m); i<(n); i++)
using namespace std;

int main()
{
    int T, input[1001], testCase = 1, counter1, counter2;
    while(1){
        counter1 = 0;
        counter2 = 0;
        cin>>T;
        if(T == 0)
            break;
        forr(0, T)
            {
                cin>>input[i];
                if(input[i] == 0)
                    counter1++;
                else counter2++;
            }
        printf("Case %d: %d\n", testCase, counter2-counter1);
        testCase++;
    }

    return 0;
}
