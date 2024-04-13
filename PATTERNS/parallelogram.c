#include<stdio.h>
int main()
{
    // int rows,columns;
    // scanf("%d%d",&rows,&columns);
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=1;j<=rows-i;j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int j=1;j<=columns;j++)   //perfect parallelogram
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    int rows,columns;
    scanf("%d%d",&rows,&columns);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=columns;j++)
        {
            if(i==1 || j==1 || i==rows || j==columns)     //hollow parallelogram
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }         
}