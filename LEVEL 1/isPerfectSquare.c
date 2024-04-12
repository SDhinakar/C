#include<stdio.h>

int main() {
    double number;
    scanf("%lf", &number);

    if (number<0) {
        printf("%.0lf is Invalid Number", number);
        return 0;
    }

    // int isPrime = 0;

    for (int i=0; i*i<=number; i++) {
        if (i*i == number) {
            // isPrime = 1;
            printf("%.0lf is a Perfect Square", number);
            return 0;
        }
        
    }
    
    printf("%.0lf is not a perfect square", number);
    return 0;

    // if (isPrime) {
    //     printf("%.0lf is a Perfect Square", number);
    // } else {
    //     printf("%.0lf is not a perfect square", number);
    // }
}