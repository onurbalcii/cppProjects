#include <iostream>
#include <iomanip>
#include "head.h"

using namespace std;

void calculator :: classaverage()
{
    int total;
    int gradecounter;
    int grade;
    double average;
    total = 0;
    gradecounter = 1;

    while(gradecounter <= 10)
    {
        cout << "enter grade ";
        cin >> grade;
        total = total + grade;
        gradecounter = gradecounter + 1;
    }
    average = total / 10;
    cout << "\n the average is " << average;
}
