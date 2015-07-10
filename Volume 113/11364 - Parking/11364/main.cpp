#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, dist[100], total;
    cin>>t;
    while(t--){
            total = 0;
        scanf("%d", &n);
        for(int i =0; i<n; i++){
            cin>>dist[i];
        }
        sort(dist, dist+n);
        for(int j=0; j<n-1; j++){
            total += (dist[j+1] - dist[j]);
        }
        printf("%d\n", total*2);
    }
    return 0;
}
