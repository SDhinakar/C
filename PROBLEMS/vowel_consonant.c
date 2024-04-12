#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else
    {
        printf("Not an alphabet");
    }
    return 0;
}