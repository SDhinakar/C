#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main() {
    char string[1000];
    scanf("%[^\n]s", string);

    int count[256] = {0};

    for (int i=0; i<strlen(string); i++) {
        char curChar = string[i];

        curChar = toupper(curChar);

        if (isalpha(curChar)) {
            count[curChar]++;
        }
    }

    int repeat = 0;
    for (int i=0; i<256; i++) {
        if (count[i] > 1) {
            printf("%c%d times repeated\n", i, count[i]);
            repeat=1;
        }
    }

    if (!repeat) {
        printf("No repeated characters in string\n");
    }
}