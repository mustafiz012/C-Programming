#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    printf("Tell me those lines\n");
    char sentences[1000];
    gets(sentences);
    int i;
    for(i=0; i<sizeof(sentences)/sizeof(char); i++){
        //printf("\n",i);
    }
    printf("III: %d",i);
    puts(sentences);
    return 0;
}
