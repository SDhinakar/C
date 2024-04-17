#include<stdio.h>

int main() {
    int size=0;
    scanf("%d", &size);

    int arr_1[size], arr_2[size], arr_3[size];

    printf("Enter elements for the first array:");
    for (int i=0;i<size;i++) {
        scanf("%d", &arr_1[i]);
    }

    printf("Enter elements for the second array:");
    for (int i=0;i<size;i++) {
        scanf("%d", &arr_2[i]);
    }

    for (int i=0; i<size; i++) {
        arr_3[i] = arr_1[i] * arr_2[i];
    }

    for (int i=0; i<size; i++) {
        printf("%d ", arr_3[i]);
    }
}