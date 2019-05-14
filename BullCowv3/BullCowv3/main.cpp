//
//  main.cpp
//  BullCowv3
//
//  Created by Brian Hart on 5/13/19.
//  Copyright © 2019 Brian Hart. All rights reserved.
//

/*
 Game works like this.
 1. Print an intro, once per run.
 2. Print rules for the game (word length, max number of tries)
 3. Game chooses an isogram from const array.
 4. Run the play sequence:
    a. Get Guess from player.
    b. Check Guess for Bulls and Cows (Bull = correct position; Cow = wrong position)
    c. Provide player a count for # of Bulls and Cows
    d. If # of Bulls = Word Length, they win this round. Else, repeat this sequence.
 5. Ask if they want to play again. If so, start from 2.
 
 */

#include <iostream>
#include "FBullCowGame.hpp"

void PrintIntro(); // Welcome to the game
void PrintGameHeader(); // Rules in force for this game (can change)

FBullCowGame BCGame;


int main(int argc, const char * argv[]) {
    
    
    
    PrintIntro();

    // Game loop (until they say no)
    
    PrintGameHeader();
    
    // Get guesses up to the max number of tries
    // If they win, break out of the loop
    
    // TODO I don't like the logic of breaking for a win
    // TODO Do we do/while loop here, and let the game class tell us when current turns > max turns?
    
    for (int i = 1; i <= BCGame.GetMaxTries(); i++)
    {
        std::string Guess;
        
        std::cout << "Try " << i << "/" << BCGame.GetMaxTries() << ". Guess: ";
        std::getline(std::cin, Guess);
        BullCowResult res = BCGame.CheckGuess(Guess);
        std::cout << "You have " << res.Bulls << " Bulls and " << res.Cows << " Cows." << std::endl;
        
        if (BCGame.isGameWon())
        {
            std::cout << "YOU WON!" << std::endl;
            break;
        }
        
    }
 
    
    // End tries loop
    
    // Loop will end here
    
    
    
    return 0;
}


void PrintIntro()
{
    std::cout << "Welcome to the Bull Cow game," << std::endl;
    std::cout << "where a Bull means a letter is in the correct position, and " << std::endl;
    std::cout << "a Cow means a letter is in the wrong position." << std::endl;
    std::cout << "Prepare to play!" << std::endl << std::endl;
}

void PrintGameHeader()
{
    std::cout << "You have " << BCGame.GetMaxTries() << " tries to guess a ";
    std::cout << BCGame.GetChosenIsogram().length() << " character isogram. Good luck!" << std::endl;
    
}
