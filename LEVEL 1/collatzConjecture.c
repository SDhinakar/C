#include<stdio.h>

int main() {
    int number=0;
    scanf("%d", &number);

    while(1) 
    {
        printf("%d->", number);
        if (number%2 == 0) 
        {
            number = number/2;
        }
        else
        {
            number = 1+number*3;
        }
        if (number == 1) {
            printf("1");
            break;
        }
    }
}