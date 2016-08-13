#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char arr[][8] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
    char arrInput[40];
    char check[3];
    string checkWIth, checker;
    int T =1;
    //freopen("input.txt", "r", stdin);
    while(T--)
    {
        for(int ii=0; ii<8; ii++)
        {
            checkWIth = arr[ii];
            for(int m=0; m<40; m++)
                cin>>arrInput[m];
            int counter =0, iCheck=0, nn =40, jj;
            for(int j=0; j<nn; j++)
            {
                nn;
                check[iCheck] = arrInput[j];
                if(iCheck>=2)
                {
                    j=0;
                    checker = check;
                    checker[0];
                    checker[1];
                    checker[2];

                    if(checker[0] == checkWIth[0] && checker[1] == checkWIth[1] && checker[2] == checkWIth[2])
                            counter++;
                    for(int ma =0; ma<3; ma++)
                    {
                        printf("%c", check[ma]);
                    }
                    printf(" ");
                    iCheck = 0;
                    for(jj=0; jj<nn-1; jj++)
                    {
                        arrInput[jj] = arrInput[jj+1];
                    }
                    nn--;
                }
                else
                    iCheck++;
            }
            printf("Counter: %d\n", counter);
        }

    }
    return 0;
}
