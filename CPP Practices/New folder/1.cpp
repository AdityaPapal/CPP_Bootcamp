#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of an arry" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the element for arr " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        while (arr[i] % 2 == 0)
        {
            arr[i] = 0;
            break;
        }
        while (arr[i] % 2 != 0)
        {
            arr[i] = 1;
            break;
        }
        cout << arr[i] << " ";
    }
}