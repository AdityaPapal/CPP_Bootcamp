#include <iostream>
using namespace std;

int main()
{
    cout << "-----:Arrays:----" << endl
         << endl;
    // datatype arrayName[size]
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Arrys 1 = " << arr[4] << endl;

    char arr1[4];
    arr1[0] = 'A';
    arr1[1] = 'B';
    arr1[2] = 'C';
    arr1[3] = 'D';

    double arr2[2];
    arr2[0] = 1.2445;
    arr2[1] = 234.545;

    char ch_arr[4] = {'A', 'B', 'C', 'D'};
    cout << "Character arrays is: " << ch_arr[3] << endl;

    int in_arr[5];
    cout << "Enter the 5 integers:" << endl;
    for (size_t i = 0; i < 5; i++)
    {
        cin >> in_arr[i];
    }
    cout << "Arrays are : " << endl;
    for (size_t i = 0; i < 5; i++)
    {
        cout << in_arr[i] << endl;
    }

    return 0;
}