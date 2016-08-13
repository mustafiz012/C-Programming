#include <stdio.h>
#include <stdlib.h>

#define N 4

int main() {
    int a[N]; //I am a static array,
    // with four uninitialized elements.

    int i;

    for(i = 0; i < N; ++i)
        a[i] = i;

    // a[0] = 0, a[1] = 1, a[2] = 2, a[3] = 3.
    // Index starts from 0 and ends at N - 1 = 4 - 1 = 3.

    // print the array
    for(i = 0; i < N; ++i)
        printf("%d ", a[i]);
    printf("\n");

    // Now let's use a dynamic array

    // this will be the pointer to the array
    int* a_dyn;

    // here we allocate memory dynamically
    // how much memory? As many elements we need,
    // multiplied by the size of every element.
    // Here we need N elements, of type int,
    // thus N * sizeof(int)
    a_dyn = malloc(N * sizeof(int));

    // fill the array (like the static case)
    for(i = 0; i < N; ++i)
        a_dyn[i] = i;

    // print the array (like the static case)
    for(i = 0; i < N; ++i)
        printf("%d ", a[i]);
    printf("\n");

    // DO NOT FORGET TO FREE YOUR DYNAMIC MEMORY
    free(a_dyn);

    return 0;
}
