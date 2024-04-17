#include<stdio.h>
#include<stdlib.h>

int compareIntegers(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int length;
    scanf("%d", &length);

    int arr[length];
    for (int i=0; i<length; i++){
        scanf("%d", &arr[i]);
    }

    size_t arraySize = sizeof(arr)/sizeof(*arr);

    qsort(arr, arraySize, sizeof(int), compareIntegers); //Quick sorting

    for (int i=0; i<length; i++) {
        printf("%d\n", arr[i]);
    }
}