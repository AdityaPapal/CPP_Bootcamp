#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    long j;
    char k;
    float l;
    double a;

    cout << "Enter the number " << endl;
    cin >> i >> j >> k >> l >> a;

    

    cout << fixed << setprecision(3) << l << endl;
    cout << fixed << setprecision(9) << a << endl;

    return 0;
}