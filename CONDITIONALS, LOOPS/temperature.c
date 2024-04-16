#include<stdio.h>

int main() {
    float temp;
    int choice;
    
    printf("Enter the temperature: ");
    scanf("%f", &temp);
    
    printf("Choose conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    
    if(choice == 1) {
        float fahrenheit = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f F\n", fahrenheit);
    } else if(choice == 2) {
        float celsius = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f C\n", celsius);
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}
