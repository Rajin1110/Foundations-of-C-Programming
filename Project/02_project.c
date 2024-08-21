#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

// ROCK PAPER SCISSOR GAME

int main()
{
    int player;
    // 0 -- > rock
    // 1 -- > paper
    // 2 -- > scissor
    printf("Choose 0->Rock,1->Paper,2->Scissor  :\n=>");
    scanf("%d", &player);
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 2
    int randomNumber = rand() % 3;
    int computer = randomNumber;

    // printf("P=%d, C=%d\n", player, computer);
    // for checking any error

    if (player == 0 && computer == 0)
    {
        printf("Player:ROCK & Computer:ROCK\n");
        printf("Computer Wins\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("Player:ROCK & Computer:Paper\n");
        printf("Player Wins\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("Player:ROCK & Computer:SCISSOR\n");
        printf("Computer Wins\n");
    }

    if (player == 1 && computer == 0)
    {
        printf("Player:PAPER & Computer:ROCK\n");
        printf("Computer Wins\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Player:PAPER & Computer:Paper\n");
        printf("Match ties\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("Player:PAPER & Computer:SCISSOR\n");
        printf("Player Wins\n");
    }

    if (player == 2 && computer == 0)
    {
        printf("Player:SCISSOR & Computer:ROCK\n");
        printf("Computer Wins\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Player:SCISSOR & Computer:Paper\n");
        printf("Player Wins\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Player:SCISSOR & Computer:SCISSOR\n");
        printf("Match ties\n");
    }

    return 0;
}