#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {

        int num1 = rand() % 10;
        int num2 = rand() % 10;


        int op = rand() % 3;

        int answer;

        switch (op)
        {
            case 0:
                cout << num1 << " + " << num2 << " = ";
                cin >> answer;
                if (answer == num1 + num2)
                    cout << "True!" << endl;
                else
                    cout << "Wrong. Answer: " << num1 + num2 << endl;
                break;

            case 1:
                cout << num1 << " - " << num2 << " = ";
                cin >> answer;
                if (answer == num1 - num2)
                    cout << "True!" << endl;
                else
                    cout << "Wrong. Answer: " << num1 - num2 << endl;
                break;

            case 2:
                cout << num1 << " * " << num2 << " = ";
                cin >> answer;
                if (answer == num1 * num2)
                    cout << "True!" << endl;
                else
                    cout << "Wrong. Answer: " << num1 * num2 << endl;
                break;
        }
    }

    return 0;
}

