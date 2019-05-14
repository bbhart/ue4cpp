//
//  FBullCowGame.cpp
//  BullCowv3
//
//  Created by Brian Hart on 5/13/19.
//  Copyright © 2019 Brian Hart. All rights reserved.
//

#include "FBullCowGame.hpp"

constexpr int MAX_TRIES = 5;


// Constructor
FBullCowGame::FBullCowGame() {
    MaxTries = MAX_TRIES;
    Reset(); // Set try to 1, pick an isogram answer
}

std::string FBullCowGame::GetChosenIsogram() const { 
    return ChosenIsogram;
}


int FBullCowGame::GetMaxTries() const { 
    return MaxTries;
}


int FBullCowGame::GetCurrentTry() const { 
    return CurrentTry;
}


void FBullCowGame::Reset() {
    ChooseIsogram();
    GameWon = false;
    CurrentTry = 1;
}


BullCowResult FBullCowGame::CheckGuess(std::string) const { 
    BullCowResult BCResult;
    
    // TODO Actually do the right thing here
    BCResult.Bulls = 2;
    BCResult.Cows = 3;
    
    return BCResult;
}

void FBullCowGame::ChooseIsogram() { 
    // TODO make an array and pick one at random
    ChosenIsogram = "IDAHO";
    return;
}

bool FBullCowGame::isGameWon() const { 
    return GameWon;
}



