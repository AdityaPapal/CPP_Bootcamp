#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << "Enter an Number: ";
    cin >> t;
    int fact = t;
    while (t > 1)
    {
        t--;
        fact = fact * t;
    }
    
    cout << "Factorial of Number is " << fact << endl;
}