#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int arr[3], sum = 0;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	printf("Sum is: %d", sum);
}
