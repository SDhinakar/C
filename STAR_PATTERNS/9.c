#include<stdio.h>
int main()
{
    int rows ,a , count=1;
    printf("enter the no. of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",count++);
            if(i>j)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
}