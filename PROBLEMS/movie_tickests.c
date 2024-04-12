#include<stdio.h>
int main()
{
    int child_count,adult_count,senior_count;
    float child_price=5.75,adult_price=7.50,senior_price=6.25;
    
    printf("Enter number of child tickets: ");
    scanf("%d",&child_count);
    printf("Enter number of adult tickets: ");
    scanf("%d",&adult_count);
    printf("Enter number of senior tickets: ");
    scanf("%d",&senior_count);

    float total_price=(child_count*child_price)+(adult_count*adult_price)+(senior_count*senior_price);
    printf("Total price: $%.2f",total_price);

    int total_tickets=child_count+adult_count+senior_count;
    printf("\nTotal tickets: %d",total_tickets);

    float average_price=total_price/total_tickets;
    printf("\nAverage price: $%.2f",average_price);

    float discount=0.0;
    if(total_tickets>=5)
    {
        discount=total_price*0.10;      //10% discount
        printf("\nDiscount: $%.2f",discount);
    }
    else
    {
        printf("\nDiscount: $%.2f",discount);
    }

}