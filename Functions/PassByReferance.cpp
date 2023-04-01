#include <iostream>
using namespace std;

inline void passbyre(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
int main()
{
    cout << "---:Pass By Referance:---" << endl;
    int i = 10, j = 20;
    cout << "After Swapping" << endl
         << "i: " << i << endl
         << "j: " << j << endl;

    passbyre(i, j);

    cout << "Before Swapping" << endl
         << "i: " << i << endl
         << "j: " << j << endl;
    return 0;
}

/*
    in user define function value of i & j are copied to the x & y
    so the swaping of two variables are done using pass by referanced
*/