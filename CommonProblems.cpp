#include <iostream>
#include <cstdio>
using namespace std;

int primeNum(int low, int up)
{
    for(int i=low; i<=up; i++){
        int flag = 0;
        for(int j=2; j<i; j++){
            if(i%j == 0){
                flag = 0;
                break;
            }else{
                //printf("%d ", j);
                flag = 1;
            }
        }
        if(flag == 1)
            printf("%d ", i);
    }
}

double bubbleSort(int arr[], int arr_size){
    int temp;
    printf("Input: %d elements\n", arr_size);
    for(int i=0; i<arr_size; i++){
        cin>>arr[i];
    }
    for(int i =0; i<arr_size; i++){
        for(int j=i+1; j<arr_size; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int j=0; j<arr_size; j++){
        cout<<arr[j]<<" ";
    }
    printf("\nLargest number: %d", arr[sizeof(arr)]);
}

int factorial(int value){
    int fact = 1;
    for(int i=2; i<=value; i++){
        fact *= i;
    }
    printf("\nFactorial of %d is: %d\n", value, fact);
}

int fibonacci(int value){
    int a =0, b =1, c=0;
    printf("%d %d ", a, b);
    for(int i =0; i<value-1; i++){
        c = a+b;
        a = b;
        b = c;
        printf("%d ", c);
    }
}

int GCD_LCM(int num1, int num2){
    int gcd = 1, lcm =1;
    if(num1<num2){
        for(int i=2; i<=num1; i++){
            if(num1%i == 0 && num2%i == 0)
                gcd = i;
        }
    }else{
        for(int i=2; i<=num2; i++){
            if(num1%i == 0 && num2%i == 0)
                gcd = i;
        }
    }
    lcm = (num2*num1)/gcd;
    printf("GCD: %d\nLCM: %d\n", gcd, lcm);
}

int largestNumber(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    if(n1>n2){
        if(n1>n3)
            printf("\nlargest: %d\n", n1);
        else
            printf("\nlargest: %d\n", n3);
        }
    else{
            if(n2>n3)
                printf("\nlargest: %d\n", n2);
            else
                printf("\nlargest: %d\n", n3);
        }
}

int main()
{
    int input_prime_low, input_prime_up;
    //cin>>input_prime_low>>input_prime_up;
    int array_size = input_prime_up-input_prime_low;
    int sort_array[array_size];

    //primeNum(input_prime_low, input_prime_up);

    //bubbleSort(sort_array, array_size);

    //factorial(array_size);

    //fibonacci(array_size);

    //GCD_LCM(input_prime_low, input_prime_up);

    largestNumber();

    return 0;
}
