#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    char operators;
    printf("what do u want to: \n");
    cin>>operators;
    if(operators == '0')    return 0;
    else{
        //printf("\nValue(s) for calculation:\n");
    }

       while(1){
         switch(operators){
    case '+':
        int i, j;
        printf("\n2 values for addition:\n");
        cin>>i>>j;
        printf("\nSummation: %d\n", i+j);
        break;

    case '-':
        int m, n;printf("\n2 values for subtraction:\n");
        cin>>m>>n;
       // if(m > n){
            printf("\nSubtraction: %d\n", m-n);
       // }else{
        //    printf("\nSubtraction: %d\n", n-m);
        //}
        break;

    case '*':
        int m2, n2;
        printf("\n2 values for multiplication:\n");
        cin>>m2>>n2;
        printf("\nMultiplication: %d\n", m2*n2);
        break;
    case '/':
        int m3, n3;
        printf("\n2 values for devision:\n");
        cin>>m3>>n3;
       //  if(m3 > n3){
            printf("\nDivision: %.2f\n", (float)m3/n3);
       // }else{
         //   printf("\nDivision: %d\n", n3/m3);
        //}
        break;

    case '!':
        {

		int m5, fact = 1;
		printf("\nInput for factorial:\n");
		cin >> m5;
		for (int p = 2; p <= m5; p++) {
			fact *= p;
		}
		printf("\nFactorial: %d", fact);

        }
		break;

	case '^':
	    {

		int m4, n4, power = 1;
		printf("\nBase then Power:\n");
		cin >> m4 >> n4;
		for (int i = 1; i <= n4; i++) {
			power *= m4;
		}
		printf("\nPower: %d", power);

	    }
		break;

	case '%':
	{
		int m6, n6, remainder;
		printf("\nRespectively dividend, divisor:\n");
		cin >> m6 >> n6;
		remainder = m6 / n6;
		printf("\nMode value is: %d", remainder);
	}
	break;
	case '`':
	{
		float m7, result;
		printf("\nInput for root:\n");
		cin >> m7;
		result = sqrt(m7);
		printf("\nThe expected sqrt_value: %.4f\n", (float)result);
	}
	break;
    }
    if(operators == '0')    return 0;
    else
    {
        printf("\nNew Operation: \n");
        cin>>operators;
    }
       }

}
