#include <iostream>
using namespace std;

inline void passbyadd(int *a, int *b)
{
    int z = *a;
    *a = *b;
    *b = z;
}
int main()
{
    cout << "---:Pass By Address:---" << endl;
    int i = 5, j = 10;

    cout << "After Swapping" << endl
         << "i: " << i << endl
         << "j: " << j << endl;

    passbyadd(&i, &j);

    cout << "Before Swapping" << endl
         << "i: " << i << endl
         << "j: " << j << endl;
    return 0;
}

/*
  in user define function we used pointers
  to swapped the values
*/