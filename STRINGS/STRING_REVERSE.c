#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int c;
    printf("Enter a string: ");
    scanf("%s", a);
    c=strlen(a);
    strrev(a);
    printf("Reverse of the string: %s and of length %d", a,c);
}