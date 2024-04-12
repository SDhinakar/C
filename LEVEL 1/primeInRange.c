#include<stdio.h>

int main() 
{
    int lower = 0, upper = 0, flag;
    scanf("%d %d", &lower, &upper);

    for (int i = lower; i<=upper; i++) 
    {

        if (i < 2) continue;
        
        flag = 1;
        
        for (int j = 2; j*j<=i; j++) 
        {
            if (i%j == 0) 
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1) 
        {
            printf("%d ", i);
        }
    }
}