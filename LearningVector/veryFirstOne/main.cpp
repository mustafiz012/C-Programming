#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    printf("Vector is a container :P \n");
    vector<int> vec;
    printf("initial size: %d\n", vec.size());
    for(int i=0; i<5; i++)
    {
        vec.push_back(i);
    }
    printf("modified size: %d\n", vec.size());

    for(int i=0; i<5; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n");

    vector<int>::iterator i = vec.begin();
    while( i != vec.end())
    {
        printf("%d ", *i);
        i++;
    }

    printf("\n");
    return 0;
}
