#include<stdio.h>
int main()
{
    int n,sum=0,temp,fact=1,digit;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        fact=1;
        for(int i=1;i<=digit;i++)
            fact*=i;
        n/=10;
        sum+=fact;
    }
    if(sum==temp)
        printf("Strong Number");
    else
        printf("Not a Strong Number");
}