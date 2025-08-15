#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the computer's choice
int getComputerChoice() {
    return rand() % 3; // 0 = Rock, 1 = Paper, 2 = Scissors
}

// Function to determine the winner
void determineWinner(int user, int computer) {
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[user]);
    printf("Computer chose: %s\n", choices[computer]);

    if (user == computer) {
        printf("It's a draw!\n");
    } else if ((user == 0 && computer == 2) ||
               (user == 1 && computer == 0) ||
               (user == 2 && computer == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}

int main() {
    int userChoice;

    // Seed the random number generator
    srand(time(NULL));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice:\n");
    printf("0 = Rock\n1 = Paper\n2 = Scissors\n");
    printf("Your choice: ");
    
    if (scanf("%d", &userChoice) != 1 || userChoice < 0 || userChoice > 2) {
        printf("Invalid input. Please enter 0, 1, or 2.\n");
        return 1;
    }

    int computerChoice = getComputerChoice();
    determineWinner(userChoice, computerChoice);

    return 0;
}
