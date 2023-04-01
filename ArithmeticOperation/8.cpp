#include <iostream>
// print fibonacci series ex : 0 1 1 2 3 5 8 13..
//  0 + 1 = 1     1+1=2
using namespace std;
int main()
{
    int i, first = 0, second = 1, next;
    cout << "How many terms you wont: ";
    cin >> i;
    cout << "---:fibonacci Series:---" << endl;
    for (size_t j = 0; j <= i; j++)
    {
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}