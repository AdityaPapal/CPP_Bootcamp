#include <iostream>
using namespace std;

void passByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{

    int a = 10, b = 20;
    cout << "---:Before swapping:---" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    passByValue(a, b); // int this value of a & b are copied so no change
    cout << "---:After swapping:---" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}