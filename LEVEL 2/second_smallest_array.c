#include<stdio.h>
#include<stdlib.h>

void main() {
    int size;
    scanf("%d", &size);

    int array[size];
    for (int i=0; i<size; i++) {
        scanf("%d", &array[i]);
    }

    if (size<=1){
        printf("Invalid");
        exit(0);
    }

    int low1=array[0], low2=array[1];

    if (low2<low1) low1=array[1], low2=array[0];

    for (int j=2; j<size; j++) {
        if (array[j]<low1) {
            low2 = low1;
            low1 = array[j];
        } else if (array[j]<low2) {
            low2 = array[j];
        }
    }

    printf("%d", low2);
}