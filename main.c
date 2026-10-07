#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber;
    int guess;
    int attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;

    printf("====================================\n");
    printf("       NUMBER GUESSING GAME\n");
    printf("====================================\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < 1 || guess > 100)
        {
            printf("Please enter a number between 1 and 100.\n\n");
        }
        else if (guess > secretNumber)
        {
            printf("Too high! Try again.\n\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too low! Try again.\n\n");
        }
        else
        {
            printf("\n====================================\n");
            printf("          CONGRATULATIONS!\n");
            printf("====================================\n");
            printf("You guessed the number: %d\n", secretNumber);
            printf("Number of attempts: %d\n", attempts);
            printf("====================================\n");

            break;
        }
    }

    return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber;
    int guess;
    int attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;

    printf("====================================\n");
    printf("       NUMBER GUESSING GAME\n");
    printf("====================================\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < 1 || guess > 100)
        {
            printf("Please enter a number between 1 and 100.\n\n");
        }
        else if (guess > secretNumber)
        {
            printf("Too high! Try again.\n\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too low! Try again.\n\n");
        }
        else
        {
            printf("\n====================================\n");
            printf("          CONGRATULATIONS!\n");
            printf("====================================\n");
            printf("You guessed the number: %d\n", secretNumber);
            printf("Number of attempts: %d\n", attempts);
            printf("====================================\n");

            break;
        }
    }

    return 0;
}