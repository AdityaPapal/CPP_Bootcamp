#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the Values for Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}