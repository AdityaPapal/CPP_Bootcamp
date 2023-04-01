#include <iostream>
using namespace std;

class A
{
public:
    int a, b;

    void operator+(A &ob)
    {
        int value1 = a;
        int value2 = ob.a;
        cout << "output: " << a - b;
    }
};

int main()
{
    A ob1, ob2;
    ob1.a = 5;
    ob2.a = 3;

    ob1 + ob2;

    return 0;
}