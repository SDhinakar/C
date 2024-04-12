#include<stdio.h>

void main() {
    int limit = 0;

    scanf("%d", &limit);

    for (int i=0; i<=limit; i++){
        for (int j=limit-i; j>0; j--) {
            printf("* ");
        }
        printf("\n");
    }
}