#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++) //right triangle increasing , space is not required
        {    
            printf("*");
        }
        printf("\n");
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++) //right triangle decreasing , space is not required 
        {
            printf("*");
        }
        printf("\n");
    }
    
}