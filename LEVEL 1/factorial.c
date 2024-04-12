#include<stdio.h>
#include<stdlib.h>

void main() {
    int number = 0;
    scanf("%d", &number);

    if (number < 0) {
        printf("Non-negative Number");
        exit(0);
    }

    long long fact = 1;
    while (number>0) {
        fact *= number;

        number -= 1;
    }

    printf("%lld", fact);
}