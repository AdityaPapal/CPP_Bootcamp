#include <iostream>
using namespace std;

template <typename T, typename D>
D add(T x, D y)
{
    return (x + y);
}
int main()
{
    cout << "Addition of two intigers is: " << add<int>(2, 4) << endl;
    cout << "Addition of two float is: " << add<float>(2, 4.5) << endl;
    cout << "Addition of two double is: " << add<int>(2, 4.565) << endl;

    return 0;
}