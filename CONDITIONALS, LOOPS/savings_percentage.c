#include<stdio.h>
int main()
{
    float savings,salary,percentage,expenditure;
    printf("Enter your salary: ");
    scanf("%f",&salary);
    
    printf("Enter your expenditure: ");
    scanf("%f",&expenditure);

    savings=salary-expenditure;
    percentage=(savings/salary)*100;

    printf("Savings: %d\nPercentage of savings: %.1f%%",(int)savings,percentage);
}