#include<stdio.h>

int sum(int,int);

void main()
{
    int s=0;
    int (*ptr)(int ,int)=sum;
    s=ptr(10,10);
    printf("Sum is %d",s);
}

int sum(int a,int b)
{
    return a+b;
}