#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int array[100], position, c, n;
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for ( c = 0 ; c < n ; c++ )
        scanf("%d", &array[c]);

    for ( c =0 ; c < n - 1 ; c++ )
        array[c] = array[c+1];

    printf("Resultant array is\n");

    for( c = 0 ; c < n - 1 ; c++ )
        printf("%d\n", array[c]);
    for(c = 0 ; c < n ; c++ )
    return 0;
    */

    int input, num1, num2;
    int gcd =1, lcm =1;
    cin>>num1>>num2;
    if(num1<num2){
        for(int i=2; i<= num1; i++){
            if(num1%i == 0 && num2%i == 0)
                gcd = i;
        }
    }else{
        for(int i=2; i<= num2; i++){
            if(num1%i == 0 && num2%i == 0)
                gcd = i;
        }
    }

    lcm = (num1*num2)/gcd;
    printf("%d %d", gcd, lcm);

    /*
    cin>>input;
    int a =0, b=1, c=0;
    //printf("%d %d ", a, b);
    printf("%d ", b);
    for(int i=0; i<input-1; i++){
        c = a+b;
        a = b;
        b = c;
        printf("%d ",c);
    }
    */
    /*
    while(1){
        cin>>input;
        int digits =0, divider =1, tempInput;
        tempInput = input;
        while(input){
            input /= 10;
            digits++;
        }
        input = tempInput;
        int inputArray[digits];
        for(int i=digits; i>0; i--){
            inputArray[i] = (input/divider)%10;
            //printf("%d ", (input/divider)%10);
            divider *= 10;
        }
        for(int i=1; i<=digits; i++)
            printf("%d ", inputArray[i]);
        printf("\n");
    }
    */
}
