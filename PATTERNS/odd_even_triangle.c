#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)     //odd triangle increasing
        {
            if(j%2==0)
                printf(" ");
            else    
                printf("*");
        }
        printf("\n");
    }
     for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i;j++)     //even triangle increasing
        {   
            if(j%2==0)
                printf(" ");
            else    
                printf("*");
        }
        printf("\n");
    }

}