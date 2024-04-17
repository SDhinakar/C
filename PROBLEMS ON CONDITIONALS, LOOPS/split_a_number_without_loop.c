#include<stdio.h>
int odd_even(int num,int choice)
{
    if(num==0)
        return 0;

    int digit=num%10;

    if((digit%2)==choice)
        return digit + odd_even( num/10 ,choice);
    else
        return odd_even( num/10 ,choice);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sum_even=odd_even(num,0);
    int sum_odd=odd_even(num,1);
    printf("Sum of even digits: %d\n",sum_even);
    printf("Sum of odd digits: %d\n",sum_odd);
}