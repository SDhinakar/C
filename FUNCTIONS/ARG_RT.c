#include<stdio.h>

int sum(int , int );

void main()
{
    int x,y;
    printf("Enter two numbers x and y:");
    scanf("%d %d",&x,&y);
    int c = sum(x, y);
    printf("sum: %d",c);
}

int sum(int x, int y)
{
    int s;
    s=x+y;
    return s;
}