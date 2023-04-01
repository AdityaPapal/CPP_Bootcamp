#include <iostream>
using namespace std;

int main()
{
    int size;
    int *ptr;
    cout << "Enter the size of the array : ";
    cin >> size;
    ptr = new int[size];

    cout<<"Enter the values for array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>ptr[i];
    }
    cout<<endl<<"Values for array: ";
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i]<<" ";
    }
}