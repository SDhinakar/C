#include<stdio.h>
#include<stdlib.h>

int compare_integers(const void *a, const void *b) {
    return(*(int *)a - *(int *)b);
}

void main() {
    int len;
    scanf("%d", &len);

    int arr[len];
    for (int i=0; i<len; i++) {
        scanf("%d", arr+i);
    }

    qsort(arr, len, sizeof(*arr), compare_integers);

    for (int i=0; i<len; i++) {
        printf("%d\n", *(arr+i));
    }
}