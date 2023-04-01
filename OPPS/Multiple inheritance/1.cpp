#include <iostream>
using namespace std;

class BaseA
{
private:
    /* data */
public:
    void Pmsg()
    {
        cout << "Base A function print" << endl;
    }
};
class BaseB
{
public:
    void pmsg()
    {
        cout << "Base B function print" << endl;
    }
};
class derived : public BaseA, public BaseB
{
public:
    void pmsg()
    {
        BaseA::Pmsg();
        BaseB::pmsg();
        cout << "Both function called " << endl;
    }
};
int main()
{
    derived d1;
    d1.pmsg();
    return 0;
}