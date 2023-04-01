#include <iostream>
using namespace std;

int main()
{
    cout << "---:2D Arrays:---" << endl;

    int arr1[5][5];                                     //declaration
    int arr2[2][2] = {1, 2, 3, 4};                      //initialzed with declaration
    int arr3[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //initialzed with declaration

    cout << "Array 1: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Array 2: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    // Addition using user input

    int in_arr[2][2];
    int in_arr1[2][2];
    int add, sub;

    cout << "---:Addition:---" << endl;

    cout << "Enter the element for 2d arrya A : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> in_arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << in_arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the element for 2d arrya B : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> in_arr1[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << in_arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Addition of arrays A and B is: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            add = in_arr[i][j] + in_arr1[i][j];
            cout << add << " ";
        }
        cout << endl;
    }
    cout << "Subtrction of arrays A and B is: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sub = in_arr[i][j] - in_arr1[i][j];
            cout << sub << " ";
        }
        cout << endl;
    }
    return 0;
}