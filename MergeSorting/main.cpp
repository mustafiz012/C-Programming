#include <iostream>
#include<cstdio>
using namespace std;

int bubbleSorting(int n){
    int array1[n], temp;
          for(int i=0; i<n; i++)
            cin>>array1[i];
          for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(array1[j]>array1[j+1]){
                    temp = array1[j];
                    array1[j] = array1[j+1];
                    array1[j+1] = temp;
                    //printf("%d ", array1[i]);
                }
            }
          }
          for(int i=0; i<n; i++)
                printf("%d ", array1[i]);
          printf("\n");
}

int mergeSorting(int n){
    printf("%d\n", n);
}

int main()
{
    int T, N;
    freopen("input.txt", "r", stdin);
    cin>>T;
    while(T--){
          cin>>N;
          bubbleSorting(N);
          //mergeSorting(N);
    }
    return 0;
}
