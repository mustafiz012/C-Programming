#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Array Size: ";
    cin>>n;
    int sortArray[n];
    int array_length = sizeof(sortArray)/sizeof(int);
    printf("\nRandom Array Input: ");
    for(int i = 0; i<array_length; i++){
        cin>>sortArray[i];
    }
    for(int i = 0; i<array_length; i++){
        for(int j =i+1; j<array_length; j++){
            if(sortArray[i] > sortArray[j]){
                swap(sortArray[j], sortArray[i]);
            }
        }
    }
    printf("\nSorted Array: ");
	for (int i = 0; i < array_length; i++)  printf("%d ", sortArray[i]);

	for(int i = 0; i < array_length; i++){
        if(sortArray[i]<0){
                printf("\n%d are negative!\n", sortArray[i]);
        }
        else {
                printf("\n%d are positive values!", sortArray[i]);
        }
	}
	for(int i = 0; i < array_length; i++){
        if(sortArray[i]%2 == 0){
            printf("\n%d is even!", sortArray[i]);
        }
        else{
            printf("\n%d is odd!", sortArray[i]);
        }
	}

}
