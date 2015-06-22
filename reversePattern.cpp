#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    printf("Bangladesh is a beautiful country with green trees\n");

    int n;
    printf("Array Size: \n");
    cin>>n;
    int pattern[n];
    int length_pat = sizeof(pattern)/sizeof(int);
    printf("\nValues for pattern: \n");
    for(int i =0; i <length_pat; i++) cin>>pattern[i];

            printf("Reverse values are: ");
        for(int i =0; i <length_pat; i++){
            for(int j =0; j <i; j++){
                swap(pattern[i], pattern[j]);
            }
        }

    printf("\n");
    for(int i=0; i<length_pat; i++){
        printf("%d ", pattern[i]);
    }



    int m;
    printf("\nChar Array Size: \n");
    cin>>m;
    char Cpattern[m];
    int length_Cpat = sizeof(Cpattern)/sizeof(char);
    printf("\nValues for patternChar: \n");
    for(int i =0; i <length_Cpat; i++) cin>>Cpattern[i];


        for(int i =0; i <length_Cpat; i++){
            for(int j =0; j <i; j++){
                swap(Cpattern[i], Cpattern[j]);
            }
        }

    printf("\nReversed values are: ");
    for(int i=0; i<length_Cpat; i++){
        printf("%c ", Cpattern[i]);
    }


}
