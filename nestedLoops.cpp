#include<bits/stdc++.h>
using namespace std;

int main(){
     for(int row =1; row<=4; row++){
        for(int col =1; col<=7; col++){
            printf("*");
            for(int j =0; j<7; j++) printf(" ");
            for(int j =0; j<7; j++) printf("*");
        }printf("\n");
    }
    for(int row =1; row<=5; row++){
        for(int col =1; col<=row; col++){
            printf("*");
        }printf("\n");
    }
    int i, j;
    cin>>i>>j;
    if(i>j){
            swap(i,j);
    }
    printf("\n%d %d", i, j);
   }

