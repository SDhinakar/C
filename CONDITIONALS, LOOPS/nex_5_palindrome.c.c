#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int start, end, sum = 0, count = 0;
    scanf("%d %d", &start, &end);
    int temp=start;
    while (count < 5 && start <= end) {
        if (isPalindrome(start)) {
            printf("%d ", start);
            sum += start;
            count++;
        }
        start++;
    }
    printf("\nSum of all palindrome numbers from %d to %d: %d\n", temp, end, sum);
    return 0;
}
