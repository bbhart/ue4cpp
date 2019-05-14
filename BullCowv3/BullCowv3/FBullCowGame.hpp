//
//  FBullCowGame.hpp
//  BullCowv3
//
//  Created by Brian Hart on 5/13/19.
//  Copyright © 2019 Brian Hart. All rights reserved.
//

#include <stdio.h>

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <string>


struct BullCowResult
{
    int Bulls;
    int Cows;
};

class FBullCowGame
{

public:
    
    FBullCowGame(); // Constructor
    
    BullCowResult CheckGuess(std::string) const; // Tally the # of bulls and cows in a guess
    int GetCurrentTry() const;
    int GetMaxTries() const;
    std::string GetChosenIsogram() const;
    bool isGameWon() const;
    
    void Reset(); // Reset current try, choose a new isogram
    
private:
    
    void ChooseIsogram();
    std::string ChosenIsogram;
    int CurrentTry;
    int MaxTries;
    bool GameWon;
    
};

#endif /* FBullCowGame_hpp */
