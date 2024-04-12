#include<stdio.h>
#include<math.h>

int main() {
    double number;
    scanf("%lf", &number);



    if (number<0) {
        printf("Error");
        return 0;
    }

    printf("%.2lf", pow(number, 0.5));
}