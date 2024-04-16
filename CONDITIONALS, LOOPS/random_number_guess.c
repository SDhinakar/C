#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int target = rand() % 20 + 1, guess, attempts = 0;
    printf("Guess the number between 1 and 20:\n");
    while (1) {
        printf("Input your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess == target) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else {
            printf("Incorrect guess. Try again!\n");
        }
    }
    return 0;
}
