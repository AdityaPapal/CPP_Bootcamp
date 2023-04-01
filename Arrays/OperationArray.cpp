/*
    input : A[4]= 6 8 10 12
            B[4]= 3 4 5 6 
    output : 
            add[4]= 9 12 15 18 
            sub[4]= 3 4 5 6 
            mul[4]= 18 32 50 72
            div[4]= 2 2 2 2
*/
#include <iostream>
using namespace std;

int main()
{
    int A[4], B[4];
    int add[4], sub[4], mul[4], div[4];
    cout << "Enter the 4 integers for A: " << endl;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the 4 integers for B: " << endl;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> B[i];
    }
    cout << "Addition of array A & B: " << endl;
    for (size_t i = 0; i < 4; i++)
    {
        add[i] = A[i] + B[i];
        cout << add[i] << "  ";
    }
    cout << endl
         << "Subtraction of array A & B: " << endl;
    for (size_t i = 0; i < 4; i++)
    {
        sub[i] = A[i] - B[i];
        cout << sub[i] << "  ";
    }
    cout << endl
         << "Multiplication of array A & B: " << endl;
    for (size_t i = 0; i < 4; i++)
    {
        mul[i] = A[i] * B[i];
        cout << mul[i] << "  ";
    }
    cout << endl
         << "Division of array A & B: " << endl;
    for (size_t i = 0; i < 4; i++)
    {
        div[i] = A[i] / B[i];
        cout << div[i] << "  ";
    }
    return 0;
}