#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, side1, side2, side3;
    cin >> n;
    while(n != 0){
        scanf("%d%d%d", &side1, &side2, &side3);
        if(side1+side2 <= side3)
            printf("Wrong!!\n");
        else if(side2+side3 <= side1)
            printf("Wrong!!\n");
        else if(side1+side3 <= side2)
            printf("Wrong!!\n");
        else
            printf("OK\n");
        n--;
    }
    return 0;
}
