#include<stdio.h>

void main() {
    long long int number = 0;
    int sum_odd = 0, sum_even = 0, position = 1;
    scanf("%lld", &number);

    while (number > 0) {
        int temp = number%10;

        if (temp%2 == 0) {
            sum_even += temp;
        } else {
            sum_odd += temp;
        }

        number /= 10;
        position++;
    }

    printf("%d\n%d", sum_even, sum_odd);
}