#include <stdio.h>

int main()
{
   int input,array[100],dup=0,index=0;
   while(dup!=1)
   {
    printf("Enter the number : ");
    scanf("%d",&input);
    for(int i=0;i<index;i++)
    {
        if(input==array[i])
        {
            dup=1;
            printf("Duplicates found,entry closed .\n");
            break;
        }
    }
    array[index++]=input;
   }
    printf("The array is : ");
    for(int i=0;i<index-1;i++)
    {
        printf("%d ",array[i]);
    }
}