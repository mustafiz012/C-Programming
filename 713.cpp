#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long arry1, arry2, array12[1000];
    cin>>T;
    while(T != 0){
        cin>>arry1>>arry2;
        int array1[1000] = arry1;
        int array2[1000] = arry2;
        for(int i=0;i<sizeof(array1)/sizeof(int); i++){
            reverse(array12[i], array1[i]);
        }
        T--;
    }
}
