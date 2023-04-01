
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int i, int j, int k, int l)
{
    int ans;
    if (i > j && i > k && i > l)
    {
        return ans = i;
    }
    else if (j > i && j > k && j > l)
    {
        return j;
    }
    else if (k > i && k > j && k > l)
    {
        return k;
    }
    else if (l > i && l > j && l > k)
    {
        return l;
    }
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
