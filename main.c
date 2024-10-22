#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess;

    // Set the seed for random number generation
    srand(time(0));
    target = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Guess a number between 1 and 100.\n");

    // Loop until the correct guess is made
    while (guess != target) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > target) {
            printf("Too high.\n");
        } else if (guess < target) {
            printf("Too low.\n");
        } else {
            printf("Correct!\n");
        }
    }

    return 0;
}
