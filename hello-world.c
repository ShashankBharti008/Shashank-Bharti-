#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice;
    char choice;

    // Seed the random number generator with the current time
    srand(time(0));

    do {
        // Generate random number between 1 and 6
        dice = (rand() % 6) + 1;
        printf("You rolled a %d!\n", dice);

        // Ask user if they want to roll again
        printf("Roll again? (y/n): ");
        scanf(" %c", &choice);  // Note the space before %c to consume any leftover newline

    } while(choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
