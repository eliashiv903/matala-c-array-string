#include <stdio.h>
#include "Arr.h"
#define size 50
int main() {
        int* po= arr;
        int* po1= arr;
        for (int i=0; i<size;i++) {
            printf("select a new number, number %d\n", i + 1);
            scanf("%d", &*po);
            po++;
        }
    insertion_sort(po1 , size);
    print_array(po1, size);
    return 0;
}