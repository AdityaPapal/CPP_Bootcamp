#include <iostream>
// calculate factorial of a number
using namespace std;

int main()
{
    cout << "---:Factorial of a Number:---" << endl;
    int i, f;
    cout << "Enter the any number: ";
    cin >> i; // input = 4
    f = i;    // f = 4

    for (int j = i; j > 1; j--)
    {
        f = f * (j - 1); // f= 4*3
    }
    cout << "The Factorial of number " << i << " is: " << f;

    return 0;
}