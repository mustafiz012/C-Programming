#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, p, cases = 1, ages[20];
    scanf("%d", &T);
    while(T--){
            int index = 0;
            scanf("%d", &N);
            for(int i=0; i<N; i++)
                {
                    cin>>ages[i];
                }
            if(N%2 == 0)
                index = (N/2) - 1;
            else index = (N/2);
            printf("Case %d: %d\n", cases, ages[index]);
            cases++;
    }
    return 0;
}
