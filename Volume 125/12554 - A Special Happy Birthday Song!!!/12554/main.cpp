#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, p1;
    char name[100][100];
    char song[16][100] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    scanf("%d", &n);
    p = n;
    p1 = n/16;
    if(n<16)
        n += (16-n);
    else if(n>16)
        n += ((16*(p1+1))-n);
    for(int i=0; i<p; i++)
        scanf("%s", name[i]);
    int k =0, p2 = 0;
    for(int j =0; j<n; j++)
    {
        if(j == 16)
            j = 0;
        printf("%s: %s\n", name[k], song[j]);
        k++;
        if(k==p)
            k =0;
        p2++;
        if(p2 == n)
            break;
    }
    return 0;
}
