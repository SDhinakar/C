#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n , i, *ptr,*ptr1;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));//memory allocated using malloc - 
    
    if(ptr==NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");

        printf("Enter the elements of the array: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        printf("The elements of the old array are: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }

        printf("\n\nEnter new size of n: ");
        scanf("%d",&n);
        ptr1=realloc(ptr,n*sizeof(int)); 
        printf("\n Previous address : %p \n New address : %p",ptr,ptr1);
        printf("\nEnter the elements of the new array: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr1+i));
        }
    }          
}