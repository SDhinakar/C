#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, digit, count = 0;
    float final = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // originalNum = num; 
    
    // while(originalNum!=0){
    //     count++;
    //     originalNum/=10;
    // }
    count=(int)log10(num)+1;

    originalNum=num;
    
    while (num != 0) {
        digit = num % 10;
        final += pow(digit, count);  
        num /= 10;
    }

    if((int)final == originalNum) 
    {
        printf("%d is an Armstrong number\n", originalNum);
    } 
    else 
    {
        printf("%d is not an Armstrong number\n", originalNum);
    }

    return 0;
}
