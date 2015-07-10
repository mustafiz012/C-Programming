#include <stdio.h>
#include <stdarg.h>

double summation(int num,...)
{

    va_list valist;
    double sum = 0;
    int i;

    /* initialize valist for num number of arguments */
    va_start(valist, num);

    /* access all the arguments assigned to valist */
    for (i = 0; i < num; i++)
    {
       sum += va_arg(valist, int);
    }
    /* clean memory reserved for valist */
    //va_end(valist);

    return sum;
}

int main()
{
   printf("Summation = %.2f\n", summation(4, 2,3,4,5));
}
