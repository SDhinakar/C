#include<stdio.h>

void main() {
    char string[1000];
    scanf("%[^\n]s", string);

    int vowels=0, consonants=0;

    for (int i=0; string[i] != '\0'; i++) {

        char ch = string[i];

        if (
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'
        ) vowels++;

        else if (ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9' || ch == '0' || ch == ' ' || ch == ',') continue;

        else consonants++;
    }

    printf("Vowels:%d\nConsonants:%d\n", vowels, consonants);
}