#include <iostream>
#include <stdlib.h>
#include <thread>

// Rock Paper Siccors
// Rock -> Scissors
// Paper -> Rock
// Scissors -> Paper


int main() {
    int wins;
    int loses;
    char again;
    int userMove;

    int randomNum;

    // Set Randomize on Start program
    srand(time(NULL));

    while(true) {
        again = ' ';
        userMove = 0;
        randomNum = rand() % 3 + 1;

        std::cout << "Computer is thinking...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Computer chose a move\n";

        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "******* RPS *******\n";
        std::cout << "Choose your move:\n";
        std::cout << "1. Rock\n";
        std::cout << "2. Paper\n";
        std::cout << "3. Scissors\n";
        std::cout << "******* RPS *******\n";
        std::cin >> userMove;

            switch (userMove) {
                case 1:
                    std::cout << "You chose Rock\n";
                    if(randomNum == 1) {
                        std::cout << "Computer chose: Rock\n";
                        std::cout << "It's a tie.\n";
                    }
                    else if(randomNum == 2) {
                        std::cout << "Computer chose: Paper\n";
                        std::cout << "You lost.\n";
                        loses++;
                    } else if(randomNum == 3) {
                        std::cout << "Computer chose: Scissors\n";
                        std::cout << "You win.\n";
                        wins++;
                    }
                    break;
                case 2:
                    std::cout << "You chose Paper\n";
                    if(randomNum == 1) {
                        std::cout << "Computer chose: Rock\n";
                        std::cout << "You win.\n";
                        wins++;
                    }
                    else if(randomNum == 2) {
                        std::cout << "Computer chose: Paper\n";
                        std::cout << "It's a tie.\n";
                    } else if(randomNum == 3) {
                        std::cout << "Computer chose: Scissors\n";
                        std::cout << "You lost.\n";
                        loses++;
                    }
                    break;
                case 3:
                    std::cout << "You chose Scissors\n";
                    if(randomNum == 1) {
                        std::cout << "Computer chose: Rock\n";
                        std::cout << "You lost.\n";
                        loses++;
                    }
                    else if(randomNum == 2) {
                        std::cout << "Computer chose: Paper\n";
                        std::cout << "You win.\n";
                        wins++;
                    } else if(randomNum == 3) {
                        std::cout << "Computer chose: Scissors\n";
                        std::cout << "It's a tie.\n";
                    }
                break;
            }

            std::cout << wins << " wins\n";
            std::cout << loses << " loses\n";

            while(true) {
                std::cout << "Wanne play again? (A = Again, Q = Quit)\n";
                std::cin >> again;
                if(again == 'A') {
                    break;
                }

                if(again == 'Q') {
                    break;
                }
            }

        if(again == 'Q') {
            break;
        }
    }
    return 0;
}