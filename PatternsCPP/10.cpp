#include <iostream>
#include <cmath>
// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5
using namespace std;

int main()
{
    int i, j, n = 4;
    for (size_t i = 0; i <= 2 * n; i++)
    {
        for (size_t j = 0; j <= 2 * n; j++)
        {
            int c = n - min(min(i, j), min((2 * n - i), (2 * n - j))) + 1;
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}