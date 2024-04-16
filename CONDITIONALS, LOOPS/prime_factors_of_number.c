#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            n /= i;
            i = 1; // Reset i to 2 so it starts from the beginning
        }
    }

    return 0;
}
