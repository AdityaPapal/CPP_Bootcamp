#include <iostream>
using namespace std;

inline int add(int x, int y)
{
    return x + y;
}
int main()
{
    cout << "---:Inline Function:---" << endl;
    int i, j;
    cout << "Enter the 2 intigers: " << endl;
    cin >> i >> j;
    cout << "Addition is: " << add(i, j) << endl;
    return 0;
}