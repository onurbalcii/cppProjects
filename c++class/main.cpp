#include <iostream>

using namespace std;
using std ::cout;
using std ::cin;
using std ::endl;

int main()
{
    int n1;
    int n2;
    int n3;
    int sum;

    cout<<"enter first number\n";
    cin>> n1;
    cout<<"enter secound number\n";
    cin>>n2;
    cout<<"enter third number\n";
    cin>>n3;
    sum = n1+n2+n3;
    cout << "sum is " <<cin <<endl;

    if(n1>n2)
        cout << n1 << "bigger than " <<  n2 <<endl;
    if(n2>n1)
        cout << n2 << "bigger than " <<  n1 <<endl;
    if(n1 == n2)
        cout << n1 << "equal " <<  n2 <<endl;
    if(n2 != n1)
        cout << n2 << "not equal " <<  n1 <<endl;
    if(n1>=n2)
        cout << n1 << "bigger than " <<  n2 <<endl;
    if(n2>=n1)
        cout << n2 << "bigger than " <<  n1 <<endl;

    return 0;
}




