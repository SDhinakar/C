#include<stdio.h>
int main()
{
    int i,j,rows;
    scanf("%d",&rows);
    
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=rows-1;i>=1;i--)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}