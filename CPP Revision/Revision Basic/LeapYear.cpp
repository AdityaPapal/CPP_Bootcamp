#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << "Enter the Year: ";
    cin >> t;
    if (t % 4 == 0)
    {
        if (t % 100 == 0)
        {
            if (t % 400 == 0)
            {
                cout << "Year is leap Year" << endl;
            }
            else
            {
                cout << "Year is Not a leap Year" << endl;
            }
        }
        else
        {
            cout << "Year is leap Year" << endl;
        }
    }
    else
    {
        cout << "Year is not a leap Year" << endl;
    }
}