#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    num++;
    
    int reversedNum = 0, originalNum = num;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    if(originalNum == reversedNum)
        return reversedNum; // Return the reversed number
    else
        return isPalindrome(originalNum); // Recursively check the next number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The next palindromic sequence after %d is %d\n", num, isPalindrome(num));
    return 0;
}
