#include <bits/stdc++.h>
#include "header.h"

using namespace std;

void numberGame :: gameSource()
{
    int numbers[] = {5, 14, 26, 37, 44, 51, 65, 74, 83, 98};

    int n = sizeof(numbers) / sizeof(numbers[0]);

    srand(time(0));
    int index = rand() % n;
    int selectedNumber = numbers[index];

    const int maxTries = 5;
    int triesLeft = maxTries;

    int guessNumber = 0;

    cout << "This is a number guessing game. (between 0-100)";

    while (triesLeft > 0 && guessNumber != selectedNumber)
    {
        cout << "\nYour remaining guesses are: " << triesLeft << endl;
        cout << "Guess: ";
        cin >> guessNumber;

        if(guessNumber!=selectedNumber)
        {
            triesLeft--;
            if(guessNumber<selectedNumber)
            {
                cout << "Your guess is low. Increase!\n";
            }
            else
            {
                cout << "Your guess is high. Decrease!\n";
            }
        }
        else
        {
            cout << "Your guess is correct. Congratulations!\n";
        }
    }
    if(guessNumber!=selectedNumber)
    {
        cout << "\nYou have no more rights!";
        cout << "\nThis was the answer: " << selectedNumber << endl;
    }

}
