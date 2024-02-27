#include <stdio.h>

int main() {
    long number, product = 1, digit;
    number = 438344;
    printf("digits are: ");
    while (number > 0) {
        digit = number % 10;
        product *= digit;
        printf("%ld ", digit);
        number /= 10;
    }
    printf("\ndigits product is: %ld", product);
    return 0;
}