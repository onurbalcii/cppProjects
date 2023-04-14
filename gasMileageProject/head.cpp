#include <iostream>
#include <iomanip>
#include "head.h"

using namespace std;

void calculator :: gasMileage()
{
    int milDrive = 0;
    int totalMil = 0;
    int totalGallon = 0;
    double milPerGallon = 0;
    double totalMilPerGallon = 0;
    int counter = 0;

    cout << "Enter miles driven (-1 to quit): ";
    cin >> milDrive;

    while (milDrive != -1) {
        counter++;

        int gallonUsed = 0;
        cout << "Enter gallons used: ";
        cin >> gallonUsed;

        milPerGallon = static_cast<double>(milDrive) / gallonUsed;
        totalMilPerGallon = totalMilPerGallon + milPerGallon;
        totalMil = totalMil + milDrive;
        totalGallon = totalGallon + gallonUsed;

        cout << "MPG this tankful: " << milPerGallon << endl;
        cout << "Total MPG: " << totalMilPerGallon / counter << endl;

        cout << "\nEnter miles driven (-1 to quit): ";
        cin >> milDrive;
    }
}
