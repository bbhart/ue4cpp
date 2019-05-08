//
//  main.cpp
//  BullCowGame
//
//  Created by Brian Hart on 5/7/19.
//  Copyright © 2019 Brian Hart. All rights reserved.
//

#include <iostream>

using namespace std;
constexpr int WORD_LENGTH = 5;
constexpr int MAX_TRIES = 10;
string Guess;

void PrintIntro();
string GetGuess();

int main(int argc, const char * argv[]) {

    PrintIntro();
    
    for (int i = 0; i < MAX_TRIES; i++)
    {
        Guess = GetGuess();
        
    }
    cout << "You guessed " << Guess << endl;

    return 0;
}

void PrintIntro()
{
    
    cout << "Welcome to Bulls and Cows, the fun letter guessing game." << endl;
    cout << "Can you guess the " << WORD_LENGTH << " isogram I'm thinking of?" << endl;
    
}

string GetGuess()
{
    
    cout << "Make a guess: " << endl;
    getline(cin, Guess);

    return Guess;

}
