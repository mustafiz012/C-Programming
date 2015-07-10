#include<bits/stdc++.h>
<<<<<<< HEAD
=======
#include<cstdio>
>>>>>>> bde11a53e1786c1ac1ba008b66106ad5ca279d35
using namespace std;

int main()
{
<<<<<<< HEAD
    int a = 1, b = 1, c, n;
    cin>>n;
    printf("%d %d ", a, b);
    for(int i=2; i<n-1; i++)
        {
            c = a+b;
            printf("%d ", c);
            a = b;
            b = c;
        }
}

=======
    int T, a, b, sum;
    cin >> T;
    while(T != 0)
    {
        sum = 0;
        cin >> a >> b;
        sum = 0;
        scanf("%d%d", &n, &m);
        sum = (a/3)*(b/3);
        printf("%lld\n", sum);
        T--;
    }
}
>>>>>>> bde11a53e1786c1ac1ba008b66106ad5ca279d35
