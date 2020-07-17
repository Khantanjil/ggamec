#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void guessnum()
{
    // Random seed
    srand(time(NULL));
    int guessplay;
    int secretNumber = rand() % 10 + 1;
    // std::cout << secretNumber << std::endl;
    std::cout << "My secret number is beetween 0 and 10. Guess my secret number!" << std::endl;
    int i;
    do
    {
        std::cout << "Guess the secret number: " << std::endl;
        std::cin >> guessplay;
        if (typeid(guessplay) == typeid(int())){
            std::cout << "Only integers please!";
        }
        if (secretNumber == guessplay)
        {
            std::cout << "Congratulations, my number was " << secretNumber << " and you tried to guess " << i+1 << " times!" << std::endl;
            break;
            
        }
        else if (secretNumber < guessplay)
        {
            std::cout << "My number is lower." << std::endl;
            i++;
            
        }
        else if (secretNumber > guessplay)
        {
            std::cout << "My number is upper" << std::endl;
            i++;
            
        }
        else
        {
            std::cout << "Didnt understand, closing the game..." << std::endl;
            break;
        }
    }
    while(secretNumber!=guessplay);
}

void startGame()
{
    int player;
    std::cout << "1. Start the game" << std::endl;
    std::cout << "2. Exit of the game" << std::endl;
    std::cout << " " << std::endl;
    std::cin >> player;
    switch (player)
    {
    case 1:
        guessnum();
        break;

    case 2:
        std::cout << "Good bye!";
        break;

    default:
        std::cout << "We didnt understand, please try again: " << std::endl;
        startGame();
    }
}

int main()
{
    startGame();
}