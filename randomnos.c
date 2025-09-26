#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerDice, computerDice;

    // Initialize random seed
    srand(time(0));

    // Player roll
    playerDice = (rand() % 6) + 1;
    printf("You rolled: %d\n", playerDice);

    // Computer roll
    computerDice = (rand() % 6) + 1;
    printf("Computer rolled: %d\n", computerDice);

    // Compare results
    if (playerDice > computerDice) {
        printf("You win!\n");
    } else if (playerDice < computerDice) {
        printf("Computer wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}

