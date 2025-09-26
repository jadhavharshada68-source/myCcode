#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    // 0 = Rock, 1 = Paper, 2 = Scissors
    srand(time(0)); 

    printf("Rock-Paper-Scissors Game\n");
    printf("Enter your choice:\n");
    printf("0 = Rock, 1 = Paper, 2 = Scissors\n");
    scanf("%d", &player);

    computer = rand() % 3; // random 0-2

    printf("You chose: %d\n", player);
    printf("Computer chose: %d\n", computer);

    if (player == computer) {
        printf("It's a draw!\n");
    } else if ((player == 0 && computer == 2) ||
               (player == 1 && computer == 0) ||
               (player == 2 && computer == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
