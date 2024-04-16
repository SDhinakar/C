#include<stdio.h>
#include<math.h>
int main()
{
    float buy,sell;
    int quantity;
    printf("Enter buying price, selling price and quantity: ");
    int inputs=scanf("%f%f%d",&buy,&sell,&quantity);

    if(inputs!=3)
    {
        printf("Invalid input");
        return 0;
    }

    float profit=(sell-buy)*quantity;
    
    if(profit>0)
    {
        printf("Profit: %.2f",profit);
    }
    else if(profit<0)
    {
        printf("Loss: %.2f",fabs(profit)); //abs() is a function in math.h which returns absolute value of a number
    }
    else
    {
        printf("No profit no loss");
    }
}