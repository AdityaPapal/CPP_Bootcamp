#include <iostream>
using namespace std;

inline void passbyvalue(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}
int main()
{
    int i = 5, j = 6;
    cout << "Before Swapping" << endl
         << "i: " << i << endl
         << "j: " << j << endl;

    passbyvalue(i, j);

    cout << "After Swapping" << endl
         << "i: " << i << endl
         << "j: " << j << endl;
    return 0;
}
/*
    here in user define function controll transfer file has been copied
    and swape vlaues in user define function so they are out of memory
    not in main function so there is no change in swapping the values
*/