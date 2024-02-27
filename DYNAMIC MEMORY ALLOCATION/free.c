#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n , i, *ptr;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));//memory allocated using malloc - 
    
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
        printf("The elements of the array are: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }  

        free(ptr);          

        printf("\nThe elements of the array are after freed: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }
        free(ptr);
    }                 
}