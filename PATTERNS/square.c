#include<stdio.h>
int main()
{
    // int rows;
    // scanf("%d",&rows);
    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=1;j<=rows;j++)    //perfect square
    //     { 
    //        printf("*");
    //     }
    //     printf("\n");
    // }

    {
        int rows;
        scanf("%d",&rows);
        for(int i=1;i<=rows;i++)
        {
            for(int j=1;j<=rows;j++) 
            {
               if(i==1 || j==1 || i==rows || j==rows)  //hollow square
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
}