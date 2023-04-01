#include <iostream>
using namespace std;

int max(int i, int j); // decleration
int main()
{
    cout << "---:Functions:---" << endl;
    int i, j;
    cout << "Enter the 2 intigers: " << endl;
    cin >> i >> j;
    // int r = max(i, j); // call the function
    cout << "The greatest number is: " << max(i, j) << endl;
    return 0;
}
int max(int x, int y) // function defination
{
    if (x > y)
        return x;
    else
        return y;
}