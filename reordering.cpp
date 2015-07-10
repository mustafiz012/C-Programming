#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    printf("Is it okay?\n");
    char str[30]; int i;
	for (i = 0; i < 5; i++) {
		cin >> str[i];
	}

	for (i = 0; i < 5; i++) {
		cout <<" "<< str[i];
	}
	return 0;
}
