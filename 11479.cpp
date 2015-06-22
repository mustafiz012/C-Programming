#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T = 1, temp;
    long long int s1, s2, s3;
    scanf("%d", &temp);
    while(temp != 0)
    {

        scanf("%lld%lld%lld", &s1, &s2, &s3);
        if(s1>=s2+s3 || s2>=s1+s3 || s3>=s1+s2 || s1<=0 || s2<=0 || s3<=0)
            printf("Case %d: Invalid\n", T);
        else if(s1 == s2 && s2 == s3)
        {
            printf("Case %d: Equilateral\n", T);
        }
        else if(s1 == s2 || s2 == s3 || s1 == s3)
        {
            printf("Case %d: Isosceles\n", T);
        }
        else if(s1 != s2 && s2 != s3 && s1 != s3)
        {
            printf("Case %d: Scalene\n", T);
        }

        T++;
        temp--;
    }
}
