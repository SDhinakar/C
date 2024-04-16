#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev=0,digit=0;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    printf("Reversed number is %d",rev);
}