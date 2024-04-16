#include <stdio.h>

int main() {
    int num, result = 0, multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        if (digit >= 0 && digit <= 8) {
            digit = (digit + 1) % 10;  // Add 1 to each digit if digit is between 0 to 8
        } else {
            digit = 0;  // If digit is 9, add 0
        }
        result += digit * multiplier;
        multiplier *= 10;
        num /= 10;
    }

    printf("Result: %d", result);
    return 0;
}
