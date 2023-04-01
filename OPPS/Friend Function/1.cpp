#include <iostream>
using namespace std;

class Myclass1
{
    friend class Myclass2; // now myclass2 is a friend of myclass1

private:
    int x;

public:
    Myclass1(int a)
    {
        x = a;
    }
};
class Myclass2
{
public:
    void setdata(Myclass1 obj)
    {
        cout << "value of x: " << obj.x << endl;
    }
};

int main()
{
    Myclass1 obj1(5);
    Myclass2 obj2;
    obj2.setdata(obj1);
    return 0;
}