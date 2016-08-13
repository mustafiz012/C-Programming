#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int n, temp, position, insertNew, searchElement;
    cin>>n;
    int inputArray[n];
    for(int i=0; i<n; i++)
        cin>>inputArray[i];

    cin>>searchElement;
    int mid = n/2;
    if(searchElement>inputArray[mid]){
        for(int i=mid+1; i<n; i++){
            if(inputArray[i] == searchElement)
                printf("%d no element", i+1);
        }
    }else{
        for(int i=0; i<mid; i++){
            if(inputArray[i] == searchElement)
                printf("%d no element", i+1);
        }
    }

    /*for(int i=0; i<n; i++)
    {
        if(inputArray[i] == searchElement)
        {
            printf("%d no element", i+1);
        }
    }

    */
    /*
    inputArray[n] = inputArray[0];

    for(int i=0; i<=n; i++)
        inputArray[i] = inputArray[i+1];
    for(int i=0; i<n; i++)
        printf("%d ", inputArray[i]);
    */
    /*
    cin>>position>>insertNew;
    for(int i=n; i>=position-1; i--){
            if(i == position-1)
                inputArray[i] = insertNew;
            else
                inputArray[i] = inputArray[i-1];
    }

    for(int i=0; i<n+1; i++)
        printf("%d ", inputArray[i]);

        */
    /*
    for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(inputArray[i]>inputArray[j]){
            temp = inputArray[i];
            inputArray[i] = inputArray[j];
            inputArray[j] = temp;
        }
    }
    }

    for(int i=0; i<n; i++)
    cout<<inputArray[i]<<" ";
    printf("\nLargest numbers respectively: %d %d", inputArray[1], inputArray[n-2]);
    */
//    printf("%d %d", inputArray[n], inputArray[n-1]);

    /*
     int firstArray[n][n], secondArray[n][n];
     for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
             cin>>firstArray[i][j];
         }
     }
     for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
             cin>>secondArray[i][j];
         }
     }
     for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
             cout<<firstArray[i][j]+secondArray[i][j]<<" ";
             if(j+1 == n)
                 cout<<"\n";
         }
     }
    */



    /*
    int n, negative_sum =0, positive_sum =0;
    float average = 0.0;
    cin>>n;
    int arrayInput[n];
    for(int i=0; i<n; i++){
        cin>> arrayInput[i];
    }
    for(int i=0; i<n; i++){
        if(arrayInput[i]<0){
            negative_sum += arrayInput[i];
        }else{
            positive_sum += arrayInput[i];
        }
    }
    average = (float)(positive_sum+negative_sum)/n;
    cout<<"Negative Sum:" <<negative_sum<< endl;
    cout<<"Positive Sum: "<<positive_sum<<endl;
    cout<<"Average: "<<average<<endl;
    */
    return 0;
}
