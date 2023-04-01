#include <iostream>
// check whether the year is leap or not
/*
  1) Every year is always divisible by 4 
  2) if year is divisible by 100 and 400 then its leap year or not 
  3) if year is not divisible by 100 but its divisible by 4 then it is leap year 
*/
using namespace std;

int main()
{
    int y;
    cout << "Enter any year to check its leap year or not" << endl;
    cin >> y;
    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            {
                cout << "It is an Leap year";
            }
            else
            {
                cout << "It is not a Leap year";
            }
        }
        else
        {
            cout << "It is an Leap year";
        }
    }
    else
    {
        cout << "It is not a Leap year";
    }

    return 0;
}