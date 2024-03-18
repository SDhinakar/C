#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int lcm=(a*b)/(a%b);
    int gcd=(a%b);
    printf("LCM of %d and %d is %d\n",a,b,lcm);
    printf("GCD of %d and %d is %d\n",a,b,gcd);
}   