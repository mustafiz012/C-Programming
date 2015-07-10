#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int T, salary[10], tempT = 1;
    scanf("%d", &T);
    while(T != 0)
    {
        for(int i = 1; i < 4; i++)
        {
            cin>>salary[i];
        }
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j <= 4 - i -1; j++)
            {
                if (salary[j] > salary[j + 1])
                {
                    swap(salary[j], salary[j+1]);
                }
            }
        }
        printf("Case %d: %d\n", tempT, salary[2]);
        tempT++;
        T--;
    }
    return 0;
}
