#include <stdio.h>
int main() 
{
    int n,factorial=1;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("factorial does not eist");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            factorial=factorial*i;
        }
        printf("factorial of %d is %d",n,factorial);

    }
    return 0;

}
