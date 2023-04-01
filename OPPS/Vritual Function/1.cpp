#include <iostream>
using namespace std;

class Mybase
{
private:
    /* data */
public:
    void show()
    {
        cout << "show function is called" << endl;
    }
    virtual void print()
    {
        cout << "Print function is called" << endl;
    }
};
class Derived : public Mybase
{
    void show()
    {
        cout << "show function is called" << endl;
    }
    void print()
    {
        cout << "Print function is called" << endl;
    }
};

int main()
{
    Mybase *ptr;
    Derived DerivedObj;
    ptr = &DerivedObj;

    // run time polymorphis
    ptr->print(); // derived class print fn called
    ptr->show();  // derived class show fn called
    return 0;
}