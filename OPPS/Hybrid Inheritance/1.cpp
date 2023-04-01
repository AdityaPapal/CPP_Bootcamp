#include <iostream>
using namespace std;

class Base
{
protected:
    int val;
};
class derived1 : virtual public Base
{
public:
    derived1()
    {
        val = 1;
    }
    void getvalue()
    {
        cout << "Value in derived function 1 is: " << val << endl;
    }
};
class derived2 : public Base
{
public:
    derived2()
    {
        val = 2;
    }
    void getvalue()
    {
        cout << "Value in derived function 2 is: " << val << endl;
    }
};
class derived3 : public derived1, public derived2
{
public:
    void getvalue()
    {
        derived1::getvalue();
        derived2::getvalue();
    }
};
int main()
{
    derived3 d1;
    d1.getvalue();

    return 0;
}