#include<stdio.h>

int main() {
    long int year = 0;
    scanf("%ld", &year);

    for (int i = 0; i < 10; i++) {
        if ((year + i) % 4 == 0 && ((year + i) % 100 != 0 || (year + i) % 400 == 0)) {
            printf("%ld is a leap year\n", year + i);
        } else {
            printf("%ld is not a leap year\n", year + i);
        }
    }
    return 0;
}
