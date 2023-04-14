#include <iostream>
#include <iomanip>
#include "head.h"

using namespace std;

void calculator :: classaverage()
{
    int total;
    int gradecounter;
    int grade;
    int pass;
    int fail;
    pass = 0;
    total = 0;
    fail = 0;
    gradecounter = 0;
    double average;

    total = 0;
    gradecounter = 0;
    cout << "enter the grade or -1 to quit";
    cin >> grade;

    while(grade != -1)
    {
        total = total + grade;
        gradecounter = gradecounter +1;
        cout << "enter the grade or -1 to quit";
        cin >> grade;
        if(grade >= 50)
        {
            pass = pass + 1; //pass++
        }
        else
        {
            fail = fail + 1; //fail++
        }
    }

    if(gradecounter != 0)
    {
        average = static_cast<double>(total) / gradecounter;
        cout << "average" << setprecision(2) << fixed << average;
        /*3.1114444 = 3.11*/
        cout << "\n number of fails stuents " << fail;
        cout << "\n number of passes stuents " << pass;
    }

    else
    {
        cout << "no grade";
    }
}

void calculator :: powerfunc(){
    int x;
    int y;
    int i;
    int power;
    i = 1;
    power = 1;
    cout << "enter the base number" << endl;
    cin >> x;
    cout << "enter exponent number" << endl;
    cin >> y;

    while(i<=y)
    {
        power = power * x; //power *= x;
        ++i;
    }

    cout << "power" << power;
}
