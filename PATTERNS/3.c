#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Odd pattern\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2 * i-1 ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    puts("Even Pattern");
    for(i = 1; i <= rows; i++)
    {
        for(j = i; j <= rows; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2 * i ; j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }


    return 0;
}