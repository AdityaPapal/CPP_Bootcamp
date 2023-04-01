#include <iostream>
#include <cmath>
// 0 0 0 0 0 0 0 0 0
// 0 1 1 1 1 1 1 1 0
// 0 1 2 2 2 2 2 1 0
// 0 1 2 3 3 3 2 1 0
// 0 1 2 3 4 3 2 1 0
// 0 1 2 3 3 3 2 1 0
// 0 1 2 2 2 2 2 1 0
// 0 1 1 1 1 1 1 1 0
// 0 0 0 0 0 0 0 0 0
using namespace std;

int main()
{
    int i, j, n = 4;
    for (size_t i = 0; i <= 2 * n; i++)
    {
        for (size_t j = 0; j <= 2 * n; j++)
        {
            int c = min(min(i, j), min((2 * n - i), (2 * n - j)));
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}