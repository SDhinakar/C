#include<stdio.h>

int main() {
    long long int number=0, square=0, temp_number=0;
    scanf("%lld", &number);

    square = number*number;

    temp_number = number;

    int flag = 1;

    while (temp_number>0) {
        if (temp_number%10 != square%10) {
            flag = 0;
            break;
        }
        temp_number /= 10;
        square /= 10;
    }

    if (flag == 0) {
        printf("Not Automorphic Number");
    } else {
        printf("Automorphic Number");
    }
}