#include<stdio.h>

void main() {
    char string[1000];
    scanf("%[^\n]s", string);

    int i=0, count=0;
    while (string[i] != '\0') {
        count++;
        i++;
    }

    printf("%d\n", count);
}