#include <bits/stdc++.h>
#include "header.h"

using namespace std;

void wordReverse :: printing()
{
    string word, reversedWord = "";
    bool exitProgram = false;

    while(!exitProgram){
    cout << "\nEnter a word (type 'exit' to quit): ";
    cin >> word;

        if(word=="exit"){
            exitProgram = true;
        }else{
            for(int i=word.length()-1; i>=0; i--){
                reversedWord += word[i];
            }
            cout << "Reversed word: " << reversedWord << endl;
            reversedWord = "";
        }
    }
}
