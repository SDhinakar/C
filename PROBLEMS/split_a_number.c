#include <stdio.h>
int main() {
    long number, product = 1, digit;
    number = 438344;
    while (number > 0) {
        digit = number % 10;
        product *= digit;
        number /= 10;
    }
    printf("digits are: %ld\n", digit);
    printf("digits product is: %ld", product);
}