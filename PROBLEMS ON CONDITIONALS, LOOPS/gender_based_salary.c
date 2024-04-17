#include<stdio.h>
int main()
{
    float salary=0.0,bonus=0.0;
    int gender;
    printf("Enter the salary: ");
    scanf("%f",&salary);
    printf("Enter the gender: ");
    scanf("%d",&gender);
    
    if(gender=='M'||gender=='m')
    {
        bonus=salary*0.05;
    }
    else if (gender=='F'||gender=='f')
    {
        bonus=salary*0.01;
    }
    if(salary<10000)
    {
        bonus+=salary*0.02;
    }
    printf("Bonus: %.2f\n",bonus);
}