#include <ctime>
#include <iostream>

int PlayGameAtDifficulty(int Difficulty)
{

    // Test the player at difficulty Difficulty
    // Return 0 if they pass, 1 if they fail

    // Welcome player to this level
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Welcome to Level " << Difficulty - 1 << "!" << std::endl;
    std::cout << "You are a hacker trying to break into a server room." << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    srand(time(NULL));

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl; // Blank line
    std::cout << "* There are 3 numbers in the code." << std::endl;
    std::cout << "* The codes add up to " << CodeSum << std::endl;
    std::cout << "* The codes multiply to " << CodeProduct << std::endl;

    //printf("DEBUG: Codes are %d %d %d\n", CodeA, CodeB, CodeC);

    std::cout << "Enter your guess (separate values with a space):" << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (CodeSum == GuessSum && CodeProduct == GuessProduct)
    {
        std::cout << "SUCCESS! You\'re in!" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "That is incorrect. You have failed and should feel bad." << std::endl;
        return 1;
    }
    
}

int main()
{

    int Difficulty = 2;
    int Result = 0;
    const int MaxDifficulty = 10;

    while (Difficulty <= MaxDifficulty)
    {
        Result = PlayGameAtDifficulty(Difficulty);
        
        // If they failed at that difficulty, they're done
        if (Result != 0)
        {
            std::cout << "Thanks for playing." << std::endl;
            return 0;
        }

        // They passed, so bump up the difficulty
        std::cin.clear();
        std::cin.ignore();
        ++Difficulty;
    }

    std::cout << "WOW! You are quite the hacker.\n";
    return 0;

}