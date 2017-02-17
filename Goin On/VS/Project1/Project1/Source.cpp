#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	printf("hello\n");
	int a, b, j, i;
	cin >> a >> b;
	//printf("%d", a|b);
	for (i = a; i <= b; i++){
		if (b >= i+1){
			j = i^(i + 1);
			i = j;
		}
	}
	printf("%d", i);
	getchar();
	return 0;
}