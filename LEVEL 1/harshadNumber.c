#include<stdio.h>

int main() {
    int num = 0, sumOfDigits = 0, digit = 0, temp = 0;

    scanf("%d", &num);

    temp = num;

    while (temp>0) {
        digit = temp%10;

        sumOfDigits += digit;

        temp /= 10;
    }

    if (num%sumOfDigits == 0) {
        printf("%d is Harshad number\n", num);
    } else {
        printf("%d is Not harshad number\n", num);
    }

}