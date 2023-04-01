#include <iostream>
//Swapping of two vairiables
using namespace std;

int main()
{
    int i = 10, j = 20;
    cout << "---:Before Swapping:---" << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    cout << "---:After Swapping:---" << endl;
    i = i + j; // 10 + 20 = 30
    j = i - j; // 30 - 20 = 10
    i = i - j; // 30 - 10 = 20
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    return 0;
}