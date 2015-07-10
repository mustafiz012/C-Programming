//problem solve 00


#include<stdio.h>

void interchange(){
    int a = 5, b = 6, temp;
    printf("\n%d %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\n%d %d", a, b);
}

void interchange_without_extraVAR()
{
    //using bitwise operator
    printf("\nwill be done! ");
    int a = 2, b = 3, temp;
    printf("\n%d %d", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\n%d %d", a, b);
}

int main()
{
    int a = 5, b = 4;
    a > b ? printf("\n%d is greater than %d", a, b) : (a == b ) ? printf("\n%d is equal to %d", b, a) : printf("\n%d is less than %d", a, b);

    int i, j, k;
            printf("\n");
    scanf("%d %d %d", &i, &j, &k);
    (i < j &&  j < k) ? printf("\n%d %d %d", i, j, k) :
        ( i < k && k < j ? printf("\n%d %d %d", i, k, j) :
         ( j < i && i < k ? printf("\n%d %d %d", j, i, k) :
          (j < k && k < i ? printf("\n%d %d %d", j, k, i) :
           ( k < j && j < i ? printf("\n%d %d %d", k, j, i) :
            printf("\n%d %d %d", k, i, j)))));

            //interchanging values i mean swapping values
    interchange();
    interchange_without_extraVAR();

    return 0;
}
