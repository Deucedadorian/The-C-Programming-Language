#include "../../headers/shellsort.h"
#include <stdio.h>
#include <stdlib.h>

#define N 10

int main() {
    int v[N];

    int i;
    
    printf("unsorted arr:");     

    for (i = 0; i < N; i++) {
        v[i] = rand();
        printf(" %d", v[i]);     
    }
    printf("\n");
    
    shellsort(v, N);
    printf("sorted arr:");     
    for (i = 0; i < N; i++)
        printf(" %d", v[i]);     
    printf("\n");
}
