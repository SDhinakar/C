#include <stdio.h> // Include the standard input/output header file.

int main() {
    int octal, decimal = 0, base = 1; // Declare variables.

    // Ask for user input
    printf("Enter an octal number: ");
    scanf("%d", &octal);

    // Convert octal to decimal
    while (octal != 0) {
        int remainder = octal % 10; // Get the rightmost digit
        decimal += remainder * base; // Add digit multiplied by place value to decimal
        octal /= 10; // Move to the next digit
        base *= 8; // Update place value
    }

    // Print the decimal equivalent
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
