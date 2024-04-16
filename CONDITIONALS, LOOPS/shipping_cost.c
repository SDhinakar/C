#include<stdio.h>
int main()
{
    float org_cost,ship_cost;
    printf("Enter the cost of the item: ");
    scanf("%f",&org_cost);
    if(org_cost>0 && org_cost<=1000)
        ship_cost=25.28;
    else if(org_cost>1000 && org_cost<=3000)
        ship_cost=50.50;
    else if(org_cost>3000 && org_cost<=5000)
        ship_cost=75.52;
    else
        ship_cost=100;
    printf("Shipping cost: %.2f\n",ship_cost*org_cost);
}