#include<bits/stdc++.h>
using namespace std;

int main()
{
    char chr[100];
    //scanf("%s", chr); //simple input excluding space char through scanf
    //scanf("%[^\n]", chr); // taking input including space(' ') through scanf
    //gets(chr);  //taking array of chars through gets()  //taking input until newLine (ENTER)
    //scanf("%[a]", chr); //scanf("%[a-z]", chr);  //scanf("%[A-Z]", chr);  //scanf("%[]", chr);
    //scanf("%[a-z A-Z 0-9]", chr); //all simple characters
    //scanf("%[^\t]", chr);  //infinite input
    //scanf("%%s*c", chr);
    //printf("%s", chr);
    //gets(chr);
    while(scanf("%[^\n]s",chr)){
    if(chr[0] == '\0') return 0;
    printf("%s ", chr);
    }




}
