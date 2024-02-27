#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch=1;
    int *ptr;
    while(ch<50)
    {
        printf("memory leak demo\n");
        ptr=(int* )malloc(40000*sizeof(int));

        printf("continue? press 1 for continue\n");
        scanf("%d",&ch);
        free(ptr);
    }
    
}