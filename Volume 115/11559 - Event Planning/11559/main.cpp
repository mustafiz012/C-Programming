#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, b, h, w, p, a, cost;
    while(scanf("%d%d%d%d", &n, &b, &h, &w) == 4)
    {
        cost = 0;
        for(int i =0; i<h; i++)
        {
            scanf("%d", &p);
            for(int j =0; j<w; j++)
            {
                scanf("%d", &a);
                if(a>=n && b>=p*n)
                    if(cost == 0 || n*p > cost)
                        cost = n*p;
            }
        }
        if(cost == 0)
            printf("stay home\n");
        else
            printf("%d\n", cost);
        //printf(cost == 0?"stay home\n":"%d\n", cost);
    }
    return 0;
}


/*

submitted:

#include<cstdio>
using namespace std;
long N, B, H, W;
long p, a;
int main()
{
	while(scanf("%d %d %d%d", &N, &B, &H, &W) == 4)
		{
			long cost = 0;
			for(int i = 0; i < H; i++)
				{
					scanf("%d", &p);
					for(int j = 0; j < W; j++)
						{
							scanf("%d", &a);
							if(a >= N && N * p <= B)
								if(cost == 0 || N * p < cost)
									cost = N * p;
						}
			}
			printf(cost == 0?"stay home\n":"%d\n", cost);
		}
}


*/
