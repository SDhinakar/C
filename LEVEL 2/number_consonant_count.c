#include<stdio.h>

int main() 
{
    char string[1000];
    scanf("%[^\n]s", string);

    int consonant_count=0, number_count=0;

    for (int i=0; string[i] != '\0'; i++)
    {
        char ch = string[i];
        if (
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == ' '
        ) {continue;}
        else if (
            ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' ||
            ch == '6' || ch == '7' || ch == '8' || ch == '9' || ch == '0'
        ) {number_count++;}
        else {consonant_count++;}
    }

    printf("%d\n%d", number_count, consonant_count);
}