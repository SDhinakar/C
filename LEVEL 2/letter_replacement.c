#include<stdio.h>
#include<string.h>

// change a -> b, e -> f, numbers -> d

int main() 
{
    char sentence[1000];
    scanf("%[^\n]s", sentence);

    int length = strlen(sentence);

    for (int i=0; i<length; i++) 
    {
        if (sentence[i] == 'a') 
        {
            sentence[i] = 'b';
        } 
        else if (sentence[i] == 'e') 
        {
            sentence[i] = 'f';
        } 
        else if (
            sentence[i] == '1' || sentence[i] == '2' || sentence[i] == '3' || sentence[i] == '4' || sentence[i] == '5' ||
            sentence[i] == '6' || sentence[i] == '7' || sentence[i] == '8' || sentence[i] == '9' || sentence[i] == '0'
        ) 
        {
            sentence[i] = 'd';
        }
    }

    printf("%s", sentence);
}