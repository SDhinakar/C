#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           if(i==n||j==1||j==i) //Hollow right triangle increasing
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(i==1||j==n||j==i) //Hollow right triangle decreasing
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}