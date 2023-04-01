#include <iostream>
using namespace std;
//        1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5
//   4 3 2 1 2 3 4
//     3 2 1 2 3
//       2 1 2
//         1

int main()
{
    int i, j, n = 5;
    for (size_t i = 1; i <= 2 * n; i++)
    {
        int c = i > n ? 2 * n - i : i;
        int sp = n - c;
        for (size_t s = 1; s <= sp; s++)
        {
            cout << "  ";
        }
        for (size_t j = c; j >= 2; j--)
        {
            cout << j << " ";
        }

        for (size_t j = 1; j <= c; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}