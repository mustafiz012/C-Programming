//fibonacci series

#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
	printf("It's okay!!\n");

	int fibN, change, testCase;
	//cin>>testCase;
	while(cin>>fibN){
	    if(fibN == -1) break;
        int a = 0, b = 1;
	for (int i = 1; i <= fibN; i++) {
        //if(i==fibN) //to determine the specific fibonacci
        //if(a >= fibN) break;
        printf("%d ", a);
		change = a + b;
		a = b;
		b = change;


	}cout<<"\n";
	}

	return 0;
}
