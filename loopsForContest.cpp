#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a, b, sum = 0, testCase;
	cin >> testCase;
    //printf("0, 0 for exit. \n");
    //while(testCase--)
	for (int i = 0; i < testCase; i++) {
            cin >> a >> b;
			//if (a == 0 && b == 0)
				//break; //return 0;
					   //'if' ইউস না করেও এক্সিট করা যেতে পারে... if u put any value except int number
			sum = a + b;
			printf("Case #%d: %d \n",i, sum);

	}
}
