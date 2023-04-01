#include <iostream>
#include <cmath>
/* Perform  arithetic operations on 2 number by creating menu driven program
when user input a number from 1 to 5 and each corresponds to particular arithmetic operation 
1. addition,2.suntraction,3.multiplication,4.divisionand moduls operation
*/
using namespace std;

int main()
{
    cout << "Arithmetic Operations" << endl;
    cout << "Enter the Option number from the following: " << endl;
    cout << "1- Addition" << endl
         << "2- Subtraction" << endl
         << "3- Multiplication" << endl
         << "4- Division";
    cout << "\n5- Modulo" << endl;

    int opt;
    cin >> opt;
    int i, j;
    switch (opt)
    {
    case 1:
        cout << "Addition Operation" << endl
             << "Enter two intigers: " << endl;
        cin >> i >> j;
        cout << "The addition of " << i << " & " << j << " is: " << (i + j) << endl;
        break;
    case 2:
        cout << "Subtraction Operation" << endl
             << "Enter two intigers: " << endl;
        cin >> i >> j;
        cout << "The subtraction of " << i << " & " << j << " is: " << (i - j) << endl;
        break;
    case 3:
        cout << "Multiplication Operation" << endl
             << "Enter two intigers: " << endl;
        cin >> i >> j;
        cout << "The multipication of " << i << " & " << j << " is: " << (i * j) << endl;
        break;
    case 4:
        cout << "Division Operation" << endl
             << "Enter two intigers: " << endl;
        cin >> i >> j;
        cout << "The division of " << i << " & " << j << " is: " << (i / j) << endl;
        break;
    case 5:
        cout << "Modulo Operation" << endl
             << "Enter two intigers: " << endl;
        cin >> i >> j;
        cout << "The moduls of " << i << " & " << j << " is: " << (i % j) << endl;
        break;
    default:
        cout << "Error : Invalid Option Number" << endl;
        break;
    }
    return 0;
}