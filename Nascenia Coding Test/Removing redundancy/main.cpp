#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[100];
    gets(str);
    for(int i=0; str[i] != '\0'; i++){
        for(int j=i+1; str[j] != '\0'; j++){
            if(str[i] == str[j] && str[i] != ' '){
                for(int k=j; str[k] != '\0'; k++){
                    str[k] = str[k+1];
                }
                i--;
            }
        }
    }
//    for(int i=0; str[i] != '\0'; i++){
//        printf("%c", str[i]);
//    }
    puts(str);
    return 0;
}
