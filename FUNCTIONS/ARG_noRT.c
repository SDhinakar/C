#include<stdio.h>

void sum(int,float);

int main()
{
    float y;
    int x;
    printf("Enter two numbers x and y:");
    scanf("%d %f",&x,&y);
    sum(x,y);
}

void sum(int x,float y)
{
    float s;
    s=x+y;
    printf("sum: %f",s);
}