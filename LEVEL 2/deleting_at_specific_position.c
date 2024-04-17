#include<stdio.h>
#include<stdlib.h>

int main() {
    int size = 0;
    scanf("%d", &size);

    int array[size];
    for(int i=0; i<size; i++) {
        scanf("%d", &array[i]);
    }

    int pos = 0;
    scanf("%d", &pos);

    if (pos>size) {
        printf("Invalid position");
        exit(0);
    }

    for (int i=pos-1; i<size; i++) {
        array[i] = array[i+1];
    }

    for (int i=0; i<size-1; i++) {
        printf("%d\n", array[i]);
    }
}