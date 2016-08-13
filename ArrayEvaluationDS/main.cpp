#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=1;i<=N; i++){
        cin>>A[i];
    }
    for(int j = N; j>0; j--)
        printf("%d ", A[j]);
    return 0;
}
