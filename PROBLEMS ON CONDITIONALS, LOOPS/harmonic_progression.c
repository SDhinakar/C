#include <stdio.h>

int main() {
    int n, a, d;

    // Input the number of terms, first term, and common difference from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common difference: ");
    scanf("%d", &d);

    // Print the first n terms of the harmonic progression
    printf("Harmonic Progression:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", 1.0 / (a + i * d));
    }

}
