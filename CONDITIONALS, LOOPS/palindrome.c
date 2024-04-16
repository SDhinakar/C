#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    fgets(s1, sizeof(s1), stdin);
    int l = strlen(s1) - 1; // Adjust for the newline character
    int isPalindrome = 1; // Assume the string is a palindrome

    for (int i = 0; i < (l / 2); i++) {
        if (s1[i] != s1[l - 1 - i]) {
            isPalindrome = 0; // Set isPalindrome to 0 if characters don't match
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", s1);
    } else {
        printf("%s is not a palindrome.\n", s1);
    }

    return 0;
}
