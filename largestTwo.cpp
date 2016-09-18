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
    for(int i=0; i<N; i++){
        if(vecc[i]>vecc[i+1]){
                if(l1<vecc[i])
                    l1 = vecc[i];
                if(l2<vecc[i+1])
                    l2 = vecc[i+1];
        }else{
            if(l1<vecc[i+1])
                l1 = vecc[i+1];
            if(l2<vecc[i])
                l2 = vecc[i];
        }
    }
    printf("1st largest: %d\n2nd Largest: %d", l1, l2);
    return 0;
}
