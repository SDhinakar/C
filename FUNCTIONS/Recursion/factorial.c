#include<stdio.h>
int factorial(int a)
{
    if(a<=1) return 1;
    else return a*factorial(a-1);
}


int main()
{
    int a=6;
    printf("factorial of %d is :%d",a,factorial(a));
}

