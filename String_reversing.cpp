#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    printf("Array Size: \n");
    cin>>n;
    char pattern[n];
    int length_pat = sizeof(pattern)/sizeof(char);
    printf("\nValues for pattern: %d\n", length_pat);
    for(int i =0; i <length_pat; i++)
        cin>>pattern[i];

}
