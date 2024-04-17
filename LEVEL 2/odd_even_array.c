#include<stdio.h>

void main() {
    int size;
    scanf("%d", &size);

    int odd[size];
    int even[size];

    int even_count = 0;
    int odd_count = 0;

    for (int i=0; i<size; i++) {
        int temp;
        scanf("%d", &temp);

        if (temp%2 == 0) {
            even[even_count++] = temp;
        } else {
            odd[odd_count++] = temp;
        }
    }

    printf("Even\n");
    for (int i=0; i<even_count; i++) {
        printf("%d\n", even[i]);
    }

    printf("Odd\n");
    for (int i=0; i<odd_count; i++) {
        printf("%d\n", odd[i]);
    }
}