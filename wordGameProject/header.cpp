#include <bits/stdc++.h>
#include "header.h"

using namespace std;

void wordGame :: gameSource()
{
    //string of words
    string words[] = {"pear", "apple", "orange", "strawberry", "banana", "grape",
    "cherry", "fig", "melon", "kiwi", "apricot", "blackberry", "watermelon", "peach"};

    //word count
    int n = sizeof(words) / sizeof(words[0]);

    //using time for random word selection
    srand(time(0));

    //random word selection
    int index = rand() % n;
    string selectedWord = words[index];

    //right of guess
    const int maxTries = 5;
    int triesLeft = maxTries;

    //User's predictions
    string guessedWord(selectedWord.length(), '-');

    //Starting the game
    cout << "Guess the word. Clue: " << selectedWord.length() << " lettered." << endl;
    while (triesLeft > 0 && guessedWord != selectedWord) {
        cout << "Your remaining guesses are: " << triesLeft << endl;
        cout << "Your guess: " << guessedWord << endl;
        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        bool isGuessCorrect = false;
        for (int i = 0; i < selectedWord.length(); i++) {
            if (selectedWord[i] == guess) {
                guessedWord[i] = guess;
                isGuessCorrect = true;
            }
        }

        if (!isGuessCorrect) {
            triesLeft--;
            cout << "Wrong guess! " << triesLeft << " You have the right to guess." << endl;
        }
    }

    if (guessedWord == selectedWord) {
        cout << "Congratulations! You guessed the word correctly: " << selectedWord << endl;
    } else {
        cout << "Your guess is over. Word: " << selectedWord << endl;
    }


}
