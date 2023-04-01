#include <iostream>
using namespace std;

int main()
{
    int a[3], b[3], add[3], sub[3], mul[3];

    cout << "Enter the 3 values of array 'A': " << endl;

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the 3 values of array 'B': " << endl;

    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    cout << endl
         << "Addition of array A & B is : ";
    for (int i = 0; i < 3; i++)
    {
        add[i]= a[i]+b[i];
        cout<<add[i]<<" ";
    }

    cout << endl
         << "Subtraction of array A & B is : ";
    for (int i = 0; i < 3; i++)
    {
        sub[i] = a[i] - b[i];
        cout<<sub[i]<<" ";
    }

    cout << endl
         << "Multiplication of array A & B is : ";
    for (int i = 0; i < 3; i++)
    {
        mul[i] = a[i] * b[i];
        cout<<mul[i]<<" ";
    }
    
}