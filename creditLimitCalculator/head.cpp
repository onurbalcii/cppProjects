#include <iostream>
#include <iomanip>
#include "head.h"

using namespace std;

void calculator :: creditLimitCalculator()
{
    int accountNum;
    double beginBalance, totalCharges, totalCredits, creditLimit, newBalance;

    while (true) {
        cout << "Enter account number (or -1 to quit): ";
        cin >> accountNum;

        if (accountNum == -1)
        {
            break;
        }

        cout << "Enter beginning balance: ";
        cin >> beginBalance;
        cout << "Enter total charges: ";
        cin >> totalCharges;
        cout << "Enter total credits: ";
        cin >> totalCredits;
        cout << "Enter credit limit: ";
        cin >> creditLimit;

        newBalance = beginBalance + totalCharges - totalCredits;

        cout << "New balance is " << newBalance << endl;
        cout << "Account: " << accountNum << endl;
        cout << "Credit limit: " << creditLimit << endl;
        cout << "Balance: " << newBalance << endl;

        if (newBalance > creditLimit)
        {
            cout << "Credit Limit Exceeded.\n" << endl;
        }
    }
}
