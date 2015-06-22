#include<stdio.h>

int main()
{
    int i, num1, num2, check = 0, min, max;
    char ch;

    while ( scanf("%d%d", &num1, &num2) != EOF ){
            getchar();
        printf("For GCD press 'g' For LCM 'l'\n");
        scanf("%c", &ch);
        switch( ch ){
        case 'g':
            if( num1 < num2 )
            {
                min = num1;
            }
            else
            {
                min = num2;
            }
            for(i = min; i >= 1; i--)
            {
                if( (num1%i) == 0 && (num2%i) == 0 )
                {
                    check = 1;
                    break;
                }

            }
            if(check == 1){
                printf("GCD: %d\n", i);
                break;
                }

        case 'l':
            check = 0;
            if( num1 > num2 )
            {
                max = num1;
            }
            else
            {
                max = num2;
            }
            for(i = max ;; i++)
            {
                if( (i%num1) == 0 && (i%num2) == 0 )
                {
                    check = 1;
                    break;
                }

            }
             if(check == 1){
                printf("LCM: %d\n", i);
                break;
                }
            break;

        }

    }
}
