#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n, m, cases = 1, counter =0;

while(scanf("%d", &n) !=EOF){

    int arr[n];

    //for (int i = 0; i < sizeof(arr[n]/arr[0]); i++) { //evabeo lekha jete pare

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

    printf("find\n");
    cin>>m;
	printf("case %d:\n", cases);
	cases++;
	for (int j = 0; j < n; j++) {
			if (arr[j] == m) {
                    counter++;
				printf("%d %d\n", m, j+1); //for multiple occurrences
				//break;
				}

		}
		printf("%d\n", counter);
}


}
