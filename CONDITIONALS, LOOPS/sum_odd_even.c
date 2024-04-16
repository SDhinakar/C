#include<stdio.h>
int main()
{
    int start,end,sum_even=0,sum_odd=0;
    printf("Enter the start and end: ");
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {
        if(i%2==0)
            sum_even+=i;
        else
            sum_odd+=i;
    }
    printf("Sum of even numbers: %d\nSum of odd numbers: %d",sum_even,sum_odd);
}