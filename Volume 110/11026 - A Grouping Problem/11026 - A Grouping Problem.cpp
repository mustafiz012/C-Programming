#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int arr[4];
	for(int i =0; i<4; i++){
		cin>>arr[i];
	}
	int sum =0;
	for(int i=0; i<4; i++){
		if(arr[i] == 1){
			for(int j=0; j<4; j++){
				printf("%d ", arr[j]);
			}
			printf("\n");
		}else if(arr[i] == 2){
			for(int j =0; j<4; j++){
				for(int s =j; s<4; s++){
					if(j == 3)
					break;
					printf("%d ", (arr[s]*10)+arr[j+1]);
				}
			}
		}
	}
	printf("hello");
	return 0;
}
