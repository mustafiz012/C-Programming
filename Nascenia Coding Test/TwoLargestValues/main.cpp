#include<iostream>
#include<cstdio>
using namespace  std;

int main(){
    int vecc[100], l1 =0, l2=0, N;
    freopen("inputForTwoLargest.txt", "r", stdin);
    cin>>N;
    for(int i=0; i< N; i++){
        cin>>vecc[i];
    }
    for(int i=1; i<N-1; i++){
        if(vecc[0]<vecc[i]){
                l2 = vecc[0];
                vecc[0] = vecc[i];
        }
    }
    printf("1st largest: %d\n2nd Largest: %d", vecc[0], l2);
    return 0;
}
