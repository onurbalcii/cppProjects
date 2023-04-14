#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	double amount;
	double principal = 1000.0;
	double rate = 0.5;

	cout << "year " << setw(21) <<"amount on deposite"<< endl;
	cout << fixed << setprecision( 2 );

	for (int year = 1; year <= 10 ; year++)
	{
		amount = principal * pow(1.0 + rate,year);
		cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
	}


	return 0;
}
