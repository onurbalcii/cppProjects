#include <string>
#include <iostream>
#include "maxi.h"

using namespace std;

int maximum::maximum_value(int x, int y, int z)
{
    int max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    return max;
}

int maximum::minimum_value(int x, int y, int z)
{
    int min = x;
    if (y < min)
        min = y;
    if (z < min)
        min = z;
    return min;
}

double maximum::average_value(int x, int y, int z)
{
    return (x + y + z) / 3.0;
}

void maximum::inputgrade()
{
    int grade1, grade2, grade3;
    cout << "Enter three grades: ";
    cin >> grade1 >> grade2 >> grade3;
    maximumGrade = maximum_value(grade1, grade2, grade3);
    minimumGrade = minimum_value(grade1, grade2, grade3);
    averageGrade = average_value(grade1, grade2, grade3);
}

void maximum::displayGradeReport()
{
    cout << "Maximum of grades entered: " << maximumGrade << endl;
    cout << "Minimum of grades entered: " << minimumGrade << endl;
    cout << "Average of grades entered: " << averageGrade << endl;
}


