#include<stdio.h>
 
void modify(char* str1,char* str2);

void main()
{
    char str1[]="dhina";
    char str2[]="06";
    modify(str1,str2);
}

void modify(char* str1,char* str2)
{
    int i,l=0;
    for (i=0;str1[i]!='\0';i++)
    {
        l++;
    }
    str2[1]='z';
    printf("Length of string 1: %d\n",l);
    printf("Both the strings are: %s %s",str1,str2);
}