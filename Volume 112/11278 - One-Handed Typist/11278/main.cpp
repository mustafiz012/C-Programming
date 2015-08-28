#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string b = "~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    string areas = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'";
    string bres = "~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
    string str;
    int lenStr, lenA, lenB, j;

    while(getline(cin, str)){
        lenStr =  str.size();
        lenA = a.size();
        lenB = b.size();
        j = 0;
        while(lenStr != 0){
            if(str[j] == ' ')
            {
                putchar(str[j]);
                lenStr--;
                j++;
            }
            for(int i=0; i<lenA; i++){
                if(str[j] == a[i]){
                    putchar(areas[i]);
                    lenStr--;
                    j++;
                }
            }
            for(int i=0; i<lenA; i++){
                if(str[j] == b[i]){
                    putchar(bres[i]);
                    lenStr--;
                    j++;
                }
            }
        }
        printf("\n");

    }
    return 0;
}
