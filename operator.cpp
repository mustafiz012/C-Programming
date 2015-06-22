//Arithmetic operators
//Integer Operator = +, -, *, /
//Real arithmetic operator
//assignment operator = "=", "+=", "-+", "*=", "/="
//increment & decrement operators
//Relational operators
//logical operator
//binary base = 2; 0 -(2-1);
//decimal base = 8; 0 - (8-1);
//hexadecimal base = 16; 0 - (16-1);
//that is counting will be occurred between {0 - (n-1)}; where n = base; '-' means 'to'
//Bitwise operators = &, |, ^, << (left shift), >>(right shift)
//Conditional operators {(exp1) ? true:false}
//Comma operators { , , , ,}

#include<stdio.h>

int main()
{
    int num1 = 5, num2 = 2;
    int res = num1 + num2;

    printf("%d", res);

    int m =5;

    m++;
    printf("\n%d", m);

    ++m;
    printf("\n%d", m);

    int n = m++;
    printf("\n%d \n%d", m, n);

    n = ++m;
    printf("\n%d \n%d", m, n);

    int o = m==n;
    printf("\n%d", o);

    int math =5; int physics = 5;
    int check;
    check = math==5 && physics==5;
    printf("\n%d", check);

    printf("\n%d %d %d", m&n, m|n, m^n);

    int a = 2;
    printf("\n%d %d ", a >> 2, a << 3);

    int i = 5, j = 10;

    (i < j) ? printf("\n%d ", i) : printf("\n%d ", j);

    int c = (j > i) ? j : i;
    printf("\n%d", c);

    int s, t, st, comma;
    comma = (s = 5, t = 10, st = (t/s));
    printf("\n%d ",comma);

    return 0;
}
