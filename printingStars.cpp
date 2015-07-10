#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

/*
n=4
*
***
*****
*******
*/

int main()
{
    int n;
    printf("Stars amount: \n");
    cin >> n;
    for(int i=1; i<=7; i+=2 ){
        for(int j=0; j<i; j++){
            printf("* ");
        }printf("\n");
    }
}
