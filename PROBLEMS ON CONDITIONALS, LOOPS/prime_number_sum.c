//Check whether a number can be express as sum of two prime numbers
#include<stdio.h>

int isprime(int num)
{
    if(num<2)
        return 0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return 0;
    }
    return num;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Enter a number greater than 1\n");
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(isprime(i) && isprime(n-i))
        {
            printf("%d + %d = %d\n",i,n-i,n);
        }
    }
    return 0;
}