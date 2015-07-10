#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    FILE *fin, *fout;
    char ch, fileIn[1000], fileOut[1000];

    gets(fileIn);
    gets(fileOut);

    fin = fopen(fileIn, "r");
    fout = fopen(fileOut, "w");

     while( ( ch = fgetc(fileIn) ) != EOF )
      fputc(ch,f);

}
