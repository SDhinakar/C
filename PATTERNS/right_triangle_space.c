#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++) //right triangle increasing , space is required
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=n-i;j++) //right triangle decreasing , space is required
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n"); 

}