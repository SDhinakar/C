#include <stdio.h>

int main() {
    int start, end, originalNum, remainder, sum, i, fact;

    printf("Enter the start and end of the range to check for Strong numbers: ");
    scanf("%d%d", &start, &end);

    for (int j = start; j <= end; j++) {
        originalNum = j;
        sum = 0;
        int temp = j; // Store j in a temporary variable to avoid modifying it.
        while (temp != 0) {
            remainder = temp % 10;
            fact = 1;
            for (i = 1; i <= remainder; i++) {
                fact *= i;
            }
            sum += fact;
            temp /= 10;
        }

        // If the sum equals the original number, it's a strong number.
        if (sum == originalNum) {
            printf("The numbers are %d\n", originalNum);
        }
    }

    return 0;
}
