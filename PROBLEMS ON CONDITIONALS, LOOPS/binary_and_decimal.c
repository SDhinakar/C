#include<stdio.h>

int decimal_to_binary(int number) 
{
    int binary = 0, remainder, base=1;
    while(number>0)
    {
        remainder=number%2;
        binary=binary+remainder*base;
        number/=2;
        base*=10;
    }
    return binary;
}
int binary_to_decimal(int number)
{
    int decimal=0,base=1,remainder;
    while(number>0)
    {
        remainder=number%10;
        decimal=decimal+remainder*base;
        number/=10;
        base*=2;
    }
    return decimal;
}

int main() {
    int choice, number;

    printf("Enter 1 for binary to decimal or 2 for decimal to binary: ");
    scanf("%d", &choice);

    printf("Enter the number: ");
    scanf("%d", &number);

    switch (choice) {
        case 1:
            printf("The decimal equivalent of %d is %d\n", number, binary_to_decimal(number));
            break;
        case 2:
            printf("The binary equivalent of %d is %d\n", number, decimal_to_binary(number));
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}