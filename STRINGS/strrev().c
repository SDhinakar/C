#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a string to reverse :");
    scanf("%s",a);
    printf("Reverse of the string: %s\n",strrev(a)); //using function
    int l=strlen(a);
    for(int i=0;i<l/2;i++)
    {
        char c=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=c;
        printf("%s\n",a);
    }
    printf("Reverse of the string: %s\n",a);
}