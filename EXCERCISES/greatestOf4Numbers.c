#include<stdio.h>

void main() {
    int a,b,c,d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int greatest = a;

    if (b>a && b>c && b>d) {
        greatest = b;
    } else if (c>a && c>d) {
        greatest = c;
    } else if (d>a) {
        greatest = d;
    }

    printf("%d", greatest);
}