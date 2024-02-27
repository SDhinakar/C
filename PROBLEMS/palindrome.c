#include <stdio.h>
#include <string.h>

int main() {
    int i, l;
    char s1[30] = "jayanth";
    l = strlen(s1);
    int isPalindrome = 1; // Assume the string is a palindrome

    for (i = 0; i < (l / 2); i++) {
        if (s1[i] != s1[l - 1 - i]) {
            isPalindrome = 0; // Set isPalindrome to 0 if characters don't match
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.", s1);
    } else {
        printf("%s is not a palindrome.", s1);
    }

    return 0;
}