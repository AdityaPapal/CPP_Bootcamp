#include <iostream>
using namespace std;
//             1
//          2  1  2
//       3  2  1  2  3
//    4  3  2  1  2  3  4
// 5  4  3  2  1  2  3  4  5

int main()
{
    int i, j, n = 5;

    for (size_t i = 1; i <= n; i++)
    {
        for (size_t s = 1; s <= n - i; s++)
        {
            cout << "   ";
        }

        for (size_t j = i; j >= 1; j--)
        {
            cout << j << "  ";
        }
        for (size_t j = 2; j <= i; j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }

    return 0;
}