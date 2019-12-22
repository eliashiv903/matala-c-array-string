//
// Created by eliashiv on 9.11.2019.
//
#include <stdio.h>
#include "Arr.h"
void shift_element(int* arr, int i){
    int temp=*arr;
    for (int j = 0; j <i ; ++j) {
        int  arr1=temp;
        arr++;
        temp=*arr;
        *arr=arr1;
    }
}
void insertion_sort(int* arr,int len) {
    for (int i = 0; i < len; ++i, arr++) {
        int key = *arr;
        int *j = arr - 1;
        int jj = i - 1;
        while (jj >= 0 && key < *j) {
            shift_element(j, 1);
            jj--;
            j--;
        }
        j++;
        *j = key;
    }
}
    void print_array(int *pointer, int n) {
        int i;
        for (i = 0; i < n-1; i++) {
            printf("%d,", *pointer);
            *pointer++;
        }
        printf("%d", *pointer);
    }
