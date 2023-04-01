#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q, a, b;

    cin >> n;
    cin >> q;

    vector<vector<int>> arrN(n);
    vector<vector<int>> arrQ(q);

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            cin >> b;
            arrN[i].push_back(b);
        }
    }

    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        cout << arrN[a][b] << endl;
    }

    return 0;
}