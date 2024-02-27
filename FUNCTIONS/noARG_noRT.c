#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum(void)//void should be used in both the function declaration and definition
{
    int a=10,b=20,sum=0;
    sum=a+b;
    printf("sum=%d",sum);
}