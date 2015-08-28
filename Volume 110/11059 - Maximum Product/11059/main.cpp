#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, testCase = 1, counter, tempMax, counter2, tempArray, tempArray2;
    long maxim;
    while(scanf("%d", &T) != EOF)
    {
        counter = 0;
        tempMax =1;
        counter2 = 0;
        int arrary[T];
        for(int i = 0; i < T; i++)
            cin>>arrary[i];
        maxim = 1;
        while(T--)
        {
            if(arrary[T] > 0)
            {
                maxim *= abs(arrary[T]);
                counter++;
                tempArray2 = abs(arrary[T]);
            }
            else if(arrary[T] < 0){
                tempMax *= abs(arrary[T]);
                counter2++;
                tempArray = abs(arrary[T]);
            }
            if(counter2%2==1)   maxim /= tempArray2;
        }
        if(counter2%2 == 0) maxim *= tempMax;
        else    maxim *= (tempMax/tempArray);
        if(counter == 0)
            maxim = 0;
        printf("Case #%d: The maximum product is %ld.\n\n", testCase, maxim);
        testCase++;
    }
    return 0;
}
