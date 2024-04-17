#include<stdio.h>
#include<string.h>

void reverse_words(char *s) {
    int length = strlen(s);

    for (int i=0; i<length/2; i++) {
        char temp = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = temp;
    }

    int start = 0;
    for (int i=0; i<=length; i++){
        if (s[i] == ' ' || s[i] == '\0') {
            int end = i-1;

            while (start<end) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }
    }

}

void main() {
    char input[1000];

    printf("Enter the sentence: ");
    // fgets(input, sizeof(input), stdin);

    // input[strcspn(input, "\n")] = '\0';
    scanf("%[^\n]s", input);

    reverse_words(input);   

    printf("%s\n", input);
}