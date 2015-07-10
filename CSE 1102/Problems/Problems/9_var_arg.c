#include <stdarg.h>
#include <stdio.h>

double summation ( int num, ... )
{
    int x;
    va_list arguments;  //va_list is a stdarg.h header types (like argue type)
    double sum = 0;

    va_start ( arguments, num );  //va_start is a stdarg.h header macros (one can say functions) which argues store values

    for (x = 0; x < num; x++ )
    {
        double xx = va_arg ( arguments, double );
        sum += xx;
    }

    return sum;
}

int main()
{
    float n2, n3, n4;
    printf("Inputs:\n");
    while(scanf("%f%f%f", &n2, &n3, &n4) != EOF)
        printf( "%.2f\n", summation ( 3, n2, n3, n4 ) );
}
