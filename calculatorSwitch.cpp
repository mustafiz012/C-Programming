#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char operators;
    printf("what do u want to: \n");
    cin>>operators;
    printf("\nTwo Values for calculation:\n");

        int m, n;


       while(scanf("%d %d", &m, &n) !=EOF){
         switch(operators){
    case '+':
        printf("\nSummation: %d\n", m+n);
        break;
    case '-':
        if(m > n){
            printf("\nSubtraction: %d\n", m-n);
        }else{
            printf("\nSubtraction: %d\n", n-m);
        }
        break;
    case '*':
        printf("\nMultiplication: %d\n", m*n);
        break;
    case '/':
         if(m > n){
            printf("\nDivision: %d\n", m/n);
        }else{
            printf("\nDivision: %d\n", n/m);
        }
        break;
    default:
        printf("\nNothing to do...");
        break;
    }
    if(operators == 'q')    break;
    else
    {
        printf("\nNew Operation: \n");
        cin>>operators;
        printf("\nNew Values: \n");
        cin>>m>>n;
    }
       }

}

