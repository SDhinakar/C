#include<stdio.h>

void modify(char* str);

int main()
{
    char str[6];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    modify(str);
    
    printf("Modified string is: %s", str);
    
    return 0;
}

void modify(char* str)
{
    str[1] = 'z';
}