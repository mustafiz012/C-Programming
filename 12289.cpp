#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, check1;
    char letter[10];
    cin>>T;
    while(T != 0){
        scanf("%s", letter);
        if(strlen(letter) == 5) printf("3\n");
        else{
                check1 = 0;
            if(letter[0] == 'o')
                check1++;
            if(letter[1] == 'n')
                check1++;
            if(letter[2] == 'e')
                check1++;
            if(check1 >= 2)
                printf("1\n");
            else
                printf("2\n");
        }
        T--;
    }
    return 0;
}
