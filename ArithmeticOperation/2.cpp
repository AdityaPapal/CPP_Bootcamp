#include <iostream>
// check wheter num is odd or even :
using namespace std;

int main()
{
    cout << "Even odd Numbers" << endl;
    cout << "Enter the any natural number: ";
    int num;
    cin >> num;
    int k = num % 2;
    if (k == 0)
    {
        cout << "The number" << num << " is a EVEN number " << endl;
    }
    else
    {
        cout << "The number" << num << " is a ODD number " << endl;
    }
    return 0;
}