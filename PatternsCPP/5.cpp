#include <iostream>
using namespace std;
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

int main()
{
    int i, j, n;
    cout << "Enter the line number: ";
    cin >> n;

    for (size_t i = 1; i <= 2 * n; i++)
    {
        int c = i > n ? 2 * n - i : i;

        int Ns = n - c;

        for (size_t s = 1; s <= Ns; s++)
        {
            cout << "  ";
        }
        for (size_t j = 1; j <= c; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}