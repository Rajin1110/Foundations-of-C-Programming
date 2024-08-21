#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// NUMBER GUESSING GAME
int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);
    // Prompt the user to guess the numbe

    int guess;
    printf("Guess a number between 1 to 100\n=>");
    scanf("%d", &guess);
    int no_of_guesses = 0;
    do
    {
        if (guess > random_number)
        {
            printf("Your guessed number is GREATER than the number\n");
            printf("Guess an another number.\n=>");
            scanf("%d", &guess);
        }
        else if (guess < random_number)
        {
            printf("Your guessed number is LESSER than the number\n");
            printf("Guess an another number.\n=>");
            scanf("%d", &guess);
        }
        no_of_guesses++;
    } while (guess != random_number);

    printf("Congrats you guessed number'%d' is the right number\n", guess);
    printf("Number of guesses was %d", no_of_guesses);
    return 0;
}
