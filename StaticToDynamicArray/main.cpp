#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int N =4;
    int arr[N];
    for(int i=0; i<N; i++){
        arr[i] = i;
    }
    int* a_dyn;
    a_dyn = malloc(N * sizeof(int));

    for(int i=0; i<N; i++){
        a_dyn[i] = i;
    }

    for(int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(a_dyn);
    return 0;
}
