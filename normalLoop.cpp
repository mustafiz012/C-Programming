#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i = 1;
    start_loop:
        printf("%d ", i);
        i++;
        if(i<=7)
            goto start_loop;
            printf("\nValue for comparison: \n");
    int j =1;
    while(cin>>j && j !=0){
        printf("\nIn the Loop!\n");
    }
}
