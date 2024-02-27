#include<stdio.h>
void sum()
{
    int a,b;
    printf("Enter a and b : ");
    scanf("%d%d",&a,&b);
    int sum = a+b;
    printf("The sum of %d and %d is %d",a,b,sum);
}
void main()
{
    sum();
    printf("\nEnd of program\n");
}