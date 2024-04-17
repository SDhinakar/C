#include<stdio.h>
int main()
{
    int choice;
    printf("Enter 1 for simple interest and 2 for compound interest: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        float principal_amount,rate,time,simple_interest;
        printf("Enter the principal amount: ");
        scanf("%f",&principal_amount);
        printf("Enter the rate of interest: ");
        scanf("%f",&rate);
        printf("Enter the time period(in years): ");
        scanf("%f",&time);

        simple_interest=(principal_amount*rate*time)/100;
        printf("Simple interest: %.2f\n",simple_interest);
    }
    else if(choice==2)
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
    else
    {
        printf("Invalid choice");
    }

}