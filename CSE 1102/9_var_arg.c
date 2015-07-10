#include <stdarg.h>
#include <stdio.h>

double summation ( int num, ... )
{
    int x;
    va_list arguments;  //va_list is a stdarg.h header types ( like argue type )
    double sum = 0;

    va_start ( arguments, num );  //va_start is a stdarg.h header macros (one can say functions) which argues store values

    for (x = 0; x < num; x++ )
    {
        sum += va_arg ( arguments, int );
    }
    va_end(arguments);

    return sum;
}

int main()
{
    //float n2,n3,n4,n5;
   //while(scanf("%f%f%f%f", &n2, &n3, &n4, &n5) != EOF)
        printf( "%.2f\n", summation ( 5,5, 3, 3, 4, 5 ) );
}
