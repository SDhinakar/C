#include <stdio.h>

// Tail-recursive function to calculate the factorial of a number
unsigned int factorial_tail(int n, unsigned int result) {
    if (n == 0) {
        return result;
    }
    return factorial_tail(n - 1, n * result);
}

// Non-tail recursive function to calculate the factorial of a number
unsigned int factorial_non_tail(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial_non_tail(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d (tail recursive): %u\n", num, factorial_tail(num, 1));
    printf("Factorial of %d (non-tail recursive): %u\n", num, factorial_non_tail(num));
    return 0;
}
