#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	double amount;
	double amount = 1000.0;
	double rate = 0.5;

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

	cout << "year " << setw(21) <<"amount on deposite"<< endl;
	cout << fixed << setprecision( 2 );

	for (int year = 1; year <= 10 ; year++)
	{
		amount = principal * pow(1.0 + rate,year);
		cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
	}


	return 0;
}
