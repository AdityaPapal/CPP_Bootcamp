#include <iostream>
// check which nuber is largest
using namespace std;

int main()
{
    cout << " ----:Largest of 3 numbers:---- " << endl;
    int i, j, k;
    cout << "Enter the 3 numbers" << endl;
    cin >> i >> j >> k;
    if (i > j)
    {
        if (i > k)
        {
            // i is the largest num
            cout << "The Largest number is: " << i << endl;
        }
        else
        {
            // k is the largest num
            cout << "The Largest number is: " << k << endl;
        }
    }
    else if (j > i)
    {
        if (j > k)
        {
            // j is the largest num
            cout << "The Largest number is: " << j << endl;
        }
        else
        {
            // k is the largest num
            cout << "The Largest number is: " << k << endl;
        }
    }
    // else
    // {
    //     cout << "The Largest number is: " << j << endl;
    // }
    return 0;
}