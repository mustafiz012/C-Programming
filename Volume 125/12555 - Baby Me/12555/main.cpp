#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, a, b, j = 1;
    char ch[30];
    scanf("%d", &T);
    while(T--){
        cin>>a;
        gets(ch);
        if(strlen(ch) > 3)
            b = (int)ch[3]-'0';
        else
            b = 0;
        printf("Case %d: ", j);
        cout<<(float)((float)a*0.5 + (float)b*0.05)<<endl;
        j++;
    }
    return 0;
}
