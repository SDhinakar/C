#include <stdio.h>

int main() {
    int i, j;

    printf("Prime numbers between 1 and 100 are:");
    int flag=1;
    for (i = 2; i <= 100; i++) 
    {
        flag=1;
        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d ",i);
    }
    
}
