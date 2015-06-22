#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, f;
    char row[100][100], col[100][100];
    while(1)
    {
        scanf("%d%d", &m, &n);
        if(m == 0 && n == 0)
            break;
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>row[i][j];
            }

        }
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>col[i][j];
            }

        }
    }
}

