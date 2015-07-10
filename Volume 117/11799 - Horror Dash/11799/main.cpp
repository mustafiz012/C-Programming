#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, temp, cases = 1, array[10000];
    scanf("%d", &T);
    while(T--)
    {
        temp =0;
        scanf("%d", &N);
        for(int j =0; j<N; j++)
        {
            scanf("%d", &array[j]);
            temp = max(array[j], temp);

        }
        printf("Case %d: %d\n", cases, temp);
        cases++;
    }
    return 0;
}
