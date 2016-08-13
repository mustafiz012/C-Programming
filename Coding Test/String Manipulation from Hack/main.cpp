//https://www.hackerrank.com/challenges/c-tutorial-strings

#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, str3, str4;
    cin>>str1>>str2;
    printf("%d %d\n", str1.size(), str2.size());
    str3 = str1+str2;
    cout<<str3<<"\n";
    str4[0] = str2[0];
    str2[0] = str1[0];
    str1[0] = str4[0];
    cout<<str1<<" "<<str2;
    return 0;
}
