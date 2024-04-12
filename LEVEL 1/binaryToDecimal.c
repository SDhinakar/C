#include<stdio.h>
#include<string.h>

int binaryToDecimal(char *a) {
    int base=1, decimal=0;
    int length = strlen(a);

    for (int i = length-1; i>=0; i--) {
        if (a[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

void main() {
    char binary[100];

    scanf("%s", binary);

    printf("%d", binaryToDecimal(binary));
}