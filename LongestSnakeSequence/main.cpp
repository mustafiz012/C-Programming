#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int row, column;
    cin>>row>>column;
    int inputArray[row][column];
    for(int i=0; i<row; i++){
        for(int j =0; j<column; j++){
            //printf("%d ", j+1);
            cin>>inputArray[i][j];
        }
        //printf("\n");
    }

    for(int i=0; i<row; i++){
        for(int j =0; j<column; j++){
            //printf("%d ", j+1);
            if()
            printf("%d ",inputArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
