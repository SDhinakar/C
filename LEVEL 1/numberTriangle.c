#include<stdio.h>

int main() {
    int rows = 0, start = 0;

    scanf("%d %d", &rows, &start);

    for (int i=1; i<=rows; i++) {

        for(int j=0; j<i; j++) {
            printf("%d", start);
        }

        printf("\n");
        start++;
    }
}