#include <bits/stdc++.h>
#include "head.h"
using namespace std;

void calculator :: machine()
{
    char ope;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose which operator you want to calculate with (+, -, *, /): ";
    cin >> ope;

    switch(ope){
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " / " << num1/num2;
            break;

        default:
            cout << "You entered the wrong operator!";
            break;
        }
}



