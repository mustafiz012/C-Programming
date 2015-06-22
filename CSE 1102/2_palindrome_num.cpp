#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    int pNum, tempNum, remNum, revNum = 0;

    cin >> pNum;
    tempNum = pNum;
    while(tempNum != 0){
		remNum = tempNum % 10;
		revNum = revNum * 10 + remNum;
		tempNum = tempNum / 10;
    }
    if(revNum == pNum){
        printf("%d is Palindrome.\n", pNum);
    }
    else{
        printf("%d is not Palindrome.\n", pNum);
    }
}
