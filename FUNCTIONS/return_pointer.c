#include<stdio.h>

int* returnpointer(int[]);

void main()
{
    int a[]={10,20,30,40,50},*p;
    p=returnpointer(a);
    printf("%d\n",*p);
}

int *returnpointer(int a[])
{
    a=a+2;
    return a;
}