#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    cout << "Function 1: " << endl;

    return a + b;
}
inline double add(int a, double b)
{
    cout << "Function 2: " << endl;

    return a + b;
}
inline double add(double a, double b)
{
    cout << "Function 3: " << endl;

    return a + b;
}
inline double add(double a, int b)
{
    cout << "Function 4: " << endl;

    return a + b;
}
int main()
{
    cout << "---:Function Overloading:---" << endl;
    cout << "Addtion is: " << add(10, 20) << endl;
    cout << "Addtion is: " << add(10, 20.10) << endl;
    cout << "Addtion is: " << add(10.20, 20.30) << endl;
    cout << "Addtion is: " << add(10.50, 20) << endl;

    return 0;
}