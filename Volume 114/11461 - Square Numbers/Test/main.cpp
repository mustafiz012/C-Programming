#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
int number, size=0;
int integers[100];
void parseInts(string str) {
   for(int i=0;str[i]!='\0';i++){
       if(i==0)
           number= str[i]-'0';
       else number = (number*10)+(str[i]-'0');

       if(str[i] == ',')
           {
           integers[size] = number;
           size++;
       }
   }
}

int main() {
    string str;
    cin >> str;
    parseInts(str);
    for(int i = 0; i < size; i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
