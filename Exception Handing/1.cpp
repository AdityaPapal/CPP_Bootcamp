#include <iostream>
using namespace std;

int main()
{
    cout << "---:Exception Handling:---" << endl;
    int numerator, denominator, result;
    cout << "Enter the numerator and denominator: " << endl;
    cin >> numerator >> denominator;
    try
    {
        if (denominator == 0)
        {
            throw denominator;
        }

        result = numerator / denominator; // main code
    }
    catch (int ex)
    {
        cout << "Exception : Zero is not allowed to denominator:- " << ex << endl;
    }
    cout << "Division is: " << result << endl;
    return 0;
}