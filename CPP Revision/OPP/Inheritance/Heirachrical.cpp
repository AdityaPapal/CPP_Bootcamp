#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Function 1 Call" << endl;
    }
};
class B : public A
{
public:
    void func2()
    {
        cout << "Function 2 Call" << endl;
    }
};
class c : public A
{
public:
    void func3()
    {
        cout << "Function 3 Call" << endl;
    }
};

int main()
{
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    c obj3;

    obj3.func1();
    obj3.func3();
    return 0;
}