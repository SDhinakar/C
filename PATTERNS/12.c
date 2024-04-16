#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // if num is divisible by any number from 2 to sqrt(num), it's not prime
    }
    return 1; // if num is not divisible by any number from 2 to sqrt(num), it's prime
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    
    return 0;
}
