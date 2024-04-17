#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int flag=0;
    int count=0;
    if(n<2)
    {
        printf("Not a prime number");
        return 0;
    }
    while(count<5)
    {
        flag=1;
        n++;
        for(int i=2;i<=n/2;i++)
        {
            if(n%2==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ",n);
            count++;
        }
    }
}
