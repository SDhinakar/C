#include<stdio.h>

int main() {
    int number = 0;

    scanf("%d", &number);

    int product = 1;
    if(number==0)
    {
        printf("0");
        return 0;
    }
    while (number != 0) {
        int temp = number%10;

        // if (temp == 0) {
        //     printf("Invalid input\n");
        //     return;
        // }

        product *= temp;

        number /= 10;
    }

    printf("%d", product);
}