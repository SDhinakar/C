#include<stdio.h>

void main() {
    char string[1000];
    scanf("%[^\n]s", string);

    int start, length;
    scanf("%d %d", &start, &length);
    start--;
    for (int i=0; i<length; i++) {
        printf("%c", string[start++]);
    }
}