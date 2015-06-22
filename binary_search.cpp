#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    	int start, last, mid, finding, n;

		cin >> n;

     int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> finding;

	start = 0;
	last = n - 1;
	mid = (start + last) / 2;

	while (start <= last) {
		if (arr[mid] < finding) {
			start = mid + 1;
		}
		else if (arr[mid] == finding) {
			printf("%d %d\n",finding, mid + 1);
			break;
		}
		else {
			last = mid - 1;
			mid = (start + last) / 2;
		}
	}
return 0;
}
