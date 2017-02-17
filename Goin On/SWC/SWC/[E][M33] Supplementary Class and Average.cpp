#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int T, scores[5], total, cases = 0;
    cin>>T;
    while(T--){
            cases++;
            total = 0;
        for(int i=0;i<5;i++){
            cin>>scores[i];
        }
        for(int i=0;i<5;i++){
            if(scores[i]<40){
                total += 40;
            }else{
                total += scores[i];
            }
        }
        printf("#%d %d\n", cases, total/5);
    }
    return 0;
}
