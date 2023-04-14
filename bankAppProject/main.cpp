#include <iostream>
#include <string>
using namespace std;

int main() {

    string banks[3] = {"Bank IS", "Bank Ziraat", "Bank HBC"};
    float interestRates[3] = {0.5, 0.6, 0.3};


    int year;
    string bank;
    float creditTotal;


    cout << "How many years would you like to take out a loan? ";
    cin >> year;


    cout << "Which bank would you like to get a loan from? (A=Bank IS, B=Bank Ziraat, C=Bank HBC) ";
    cin >> bank;


    float rate;
    if (bank == "A") {
        rate = interestRates[0];
    } else if (bank == "B") {
        rate = interestRates[1];
    } else if (bank == "C") {
        rate = interestRates[2];
    } else {
        cout << "Invalid bank selection!" << endl;
        return 0;
    }


    cout << "How many TL would you like to take out a loan? ";
    cin >> creditTotal;


    float amountOfInterest = creditTotal * rate * year;
    float totalSum = creditTotal + amountOfInterest;


    cout << endl << "Bank: " << bank << endl;
    cout << "Credit Total: " << creditTotal << " TL" << endl;
    cout << "Rate: " << rate << endl;
    cout << "Year: " << year << endl;
    cout << "Amount of interest: " << amountOfInterest << " TL" << endl;
    cout << "Total refund amount: " << totalSum << " TL" << endl;

    return 0;
}

