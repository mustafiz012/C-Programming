#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main(){

    int n, m;
    cout<<"Array Size: ";
    cin>>n;
    int maxArray[n];
    int array_length = sizeof(maxArray)/sizeof(int);
    printf("\nRandom Array Input: ");
    for(int i = 0; i<array_length; i++){
        cin>>maxArray[i];
    }

    for(int i=0; i<array_length; i++){
        for(int j=0; j<array_length; j++){
            if(maxArray[i] > maxArray[j]){
                    //if(maxArray[i] > maxArray[j]){ //for minimum
                maxArray[j] = maxArray[i];
            }
                m = maxArray[j];
        }
    }printf("\nMax: %d ", m);
}
