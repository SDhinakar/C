#include <stdio.h>

void removeDuplicates(int arr[], int *length) {
    int index=0;

    for (int i=0; i<*length; i++) {
        int j;
        for (j=0; j<i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }

        if (i==j) {
            arr[index++] = arr[i];
        }
    }

    *length = index;
}

int main() {
    int length;
    printf("Enter the size of the array: ");
    scanf("%d", &length);

    int array[length];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }

    removeDuplicates(array, &length);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
