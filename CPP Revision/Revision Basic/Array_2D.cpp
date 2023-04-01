#include <iostream>
using namespace std;

int main()
{
    int size1, size2;
    cout << "Enter the size of array A: ";
    cin >> size1 >> size2;

    int Arr_A[size1][size2];
    int Arr_B[size1][size2];
    int Addition[size1][size2];
    int Subtraction[size1][size2];

    cout << endl
         << "Enter the Values for Array A: " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cin >> Arr_A[i][j];
        }
    }
    cout << "Enter the Values for Array B: " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cin >> Arr_B[i][j];
        }
    }
    cout << "The values of Array A: " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << Arr_A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The values of Array A: " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << Arr_B[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "---:Addition:--- " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            Addition[i][j] = Arr_A[i][j] + Arr_B[i][j];
        }
    }
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << Addition[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "---:Subtraction:--- " << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            Subtraction[i][j] = Arr_A[i][j] - Arr_B[i][j];
        }
    }
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << Subtraction[i][j] << " ";
        }
        cout << endl;
    }
}