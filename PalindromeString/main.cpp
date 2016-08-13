#include <iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    string input;
    cin>>input;
    cout<<input.size()<<"\n";
    char arr[input.length()];
    //snprintf(arr, input.length(), input.c_str());

    arr[sizeof(arr)-1] = '\0';
    //input.copy(arr, input.length());
    for(int i=0; ; i++){
        if(arr[i] == '\0')
            break;
        printf("%c ", arr[i]);
    }

    return 0;
}
