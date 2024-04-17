#include<stdio.h>
#include<stdlib.h>

void main() {
    int size;
    scanf("%d", &size);

    int array[size];
    for (int i=0; i<size; i++) {
        scanf("%d", &array[i]);
    }

    if (size<=1) {
        printf("Invalid");
        exit(0);
    }

    int max1=array[0], max2 = array[1];

    if (max1<max2) max1=array[1], max2=array[2];

    for (int i=2; i<size; i++) {
        if (array[i]>max1) {
            int temp = max1;
            max1 = array[i];
            max2 = temp;
        } else if (array[i]>max2) {
            max2 = array[i];
        }
    }

    printf("%d", max2);
}