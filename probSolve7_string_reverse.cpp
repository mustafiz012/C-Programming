#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char text[10];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>text[i];
       // scanf("%s", text[i]);
    }
    for(int i = n - 1; i >= 0; i--){ //n-1 due to index start from 0
        printf("%c", text[i]);
    }
}
