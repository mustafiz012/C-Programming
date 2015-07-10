#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	int n;
	while(scanf("%d ", &n) != EOF){
        int arr[n], arr_length = sizeof(arr)/sizeof(int);
	for (int i = 0; i < arr_length; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < arr_length; i++) {
		for (int j = 0; j <= arr_length; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j+1], arr[j]);
			}
		}
	}
	for (int i = 0; i < arr_length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	}

}
