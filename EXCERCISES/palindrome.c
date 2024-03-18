#include<stdio.h>
#include<stdlib.h>

int main() {
    int number, reversedNumber=0, temp;
    scanf("%d", &number);

    number = abs(number);

    temp = number;

    while (temp>0)
    {
        int digit = temp%10;

        reversedNumber = reversedNumber*10 + digit;
        temp /= 10;
    }
    
    if (reversedNumber == number) {
        printf("%d is Palindrome", number);
    } else {
        printf("%d is not a Palindrome", number);
    }
}