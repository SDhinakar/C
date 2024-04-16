#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int n, temp;
    char str[20];

    // Input
    scanf("%d", &n);

    // Check for invalid input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Convert integer to string
    sprintf(str, "%d", n);

    // Swap first and last digits
    char first_digit = str[0];
    str[0] = str[strlen(str) - 1];
    str[strlen(str) - 1] = first_digit;

    // Convert back to integer
    // sscanf(str, "%d", &temp);
    temp=atoi(str);

    // Output
    printf("The final number after swapping first and last digits is %d\n", temp);

    return 0;
}
