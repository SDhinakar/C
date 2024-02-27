#include<stdio.h>

void sum(int a,int b)
{
    printf("sum=%d\t",a+b);
}

void sub(int a,int b)
{
    printf("sub=%d",a-b);   
}

void display(void(*fptr)(int a,int b))
{
    fptr(1,19);
}

void main()
{
    display(sum);
    display(sub);
}