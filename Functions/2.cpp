#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int divv(int x, int y)
{
    return x / y;
}
int mod(int x, int y)
{
    return x % y;
}
int main()
{
    cout << "---:Arthmetic Operation using Function:---" << endl;
    int i, j;
    cout << "Enter two intigers: " << endl;
    cin >> i >> j;

    cout << "Addition is: " << add(i, j) << endl;

    cout << "Subtraction is: " << sub(i, j) << endl;

    cout << "Multiplication is: " << mul(i, j) << endl;

    cout << "Division is: " << divv(i, j) << endl;

    cout << "Modules is: " << mod(i, j) << endl;

    return 0;
}