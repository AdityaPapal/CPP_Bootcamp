#include <iostream>
using namespace std;

int main()
{
    int i = 10, j = 20;
    cout << "---:Before Swapping:---" << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    cout << "---:After Swapping:---" << endl;
    int temp = i; // temp == 10
    i = j;        // i== 20
    j = temp;     // j == 10
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    return 0;
}