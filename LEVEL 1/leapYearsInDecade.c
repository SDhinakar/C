#include<stdio.h>

void main() {
    long int year = 0, isLeap = 0;
    scanf("%ld", &year);

    if ((year%4 == 0 && year%100 != 0) || year%400 == 0) {
        isLeap = 1;
        printf("%ld is a leap year\n", year);
    } else {
        printf("%ld is not a leap year\n", year);
    }

    for (long int i=year+1; i<=year+9; i++) {
        if ((i%4 == 0 && i%100 != 0) || i%400 == 0) {
            if (isLeap == 0) {
                printf("%ld is a leap year\n", i);
            } else {
                continue;
            }
        } else if (isLeap){
            printf("%ld is not a leap year\n", i);
        }
    }
}