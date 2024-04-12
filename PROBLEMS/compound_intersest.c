#include<stdio.h>
#include<math.h>
int main()
{
    float principal_amount,rate,time,compound_interest;

    printf("Enter the principal amount: ");
    scanf("%f",&principal_amount);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the time period(in years): ");
    scanf("%f",&time);
    rate=rate/100;
    
    compound_interest=principal_amount*pow(1+rate,time)-principal_amount;
    printf("Compound interest: %.2f\n",compound_interest);

}