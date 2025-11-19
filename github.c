#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Simple Number Guessing Game in C
// The computer picks a random number between 1 and 100, and the player guesses it.

int main() {
    int secretNumber, guess, attempts = 0;
    char playAgain;

    srand(time(0));  // Seed the random number generator

    do {
        secretNumber = rand() % 100 + 1;  // Generate random number 1-100
        attempts = 0;

        printf("Welcome to the Number Guessing Game!\n");
        printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < secretNumber) {
                printf("Too low! Try again.\n");
            } else if (guess > secretNumber) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            }
        } while (guess != secretNumber);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);  // Note the space before %c to consume newline
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");

}