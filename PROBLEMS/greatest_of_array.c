#include <stdio.h>

int main() 
{
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The maximum number is: %d\n", max);
    return 0;
}
