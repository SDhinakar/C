#include<stdio.h>

void main(){
    int number = 0, num=1;
    scanf("%d", &number);

    for (int i=1; i<=number; i++) 
    {
        for (int j=1; j<=i; j++) 
        {
            printf("%d", num);
            if (j<i) 
            {
                printf("*");
            }
            num++;  //2
        }
        printf("\n");
    }
}