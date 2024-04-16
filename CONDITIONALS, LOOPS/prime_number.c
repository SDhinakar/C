#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int flag=0;
    if(n<2)
    {
        printf("Not a prime number");
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Prime number");
    else
        printf("Not a prime number");
}
