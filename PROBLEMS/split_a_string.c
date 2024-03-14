#include <stdio.h>

int main() {
    long number,count=0, product = 1, digit;
    number = 438344;
    printf("digits are: ");
    while (number > 0) {
        count++;
        digit = number % 10;
        product *= digit;
        printf("%ld ", digit);
        number /= 10;
    }
    printf("\ndigits product is: %ld", product);
    printf("\nnumber of digits: %ld", count);
    return 0;
}