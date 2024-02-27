#include <stdio.h>

enum Gender {
    Male,
    Female,
    Other
}; //these are accessed by 0,1,2 respectively

int main() {
    int gender;
    float discountPercentage;

    printf("Enter a number (0 for Male, 1 for Female, 2 for Other) representing the gender:  " );
    scanf("%d", &gender);

    printf(" size : %d\n",sizeof(gender)); //since enum gives only one value at a time, it is of size 4 bytes(integer)

            switch (gender) {
                case Male:
                    discountPercentage = 0.1; // 10% discount for Male on Monday
                    break;
                case Female:
                    discountPercentage = 0.15; // 15% discount for Female on Monday
                    break;
                case Other:
                    discountPercentage = 0.05; // 5% discount for Other on Monday
                    break;
                default:
                    discountPercentage = 0; // No discount for invalid gender
                    break;
            }

    printf("Discount Percentage: %.2f%%\n", discountPercentage * 100);

    return 0;
}
