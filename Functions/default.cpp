#include <iostream>
using namespace std;

inline int sum(int a, int b, int c = 0, int d = 10)
{
    return (a + b + c + d);
}
int main()
{
    cout << "---:Default Function:---" << endl;
    int i, j;
    cout << "Enter two intigers: " << endl;
    cin >> i >> j;

    cout << "---:Without using default parameter:--" << endl;
    cout << "Addition is: " << sum(i, j, 2, 4) << " (here we add 2 and 4 which not using uer define function)" << endl;
    cout << "---:Using Defalut parameters:---" << endl;
    cout << "Addition of numbers is: " << sum(i, j) << endl;
    return 0;
}