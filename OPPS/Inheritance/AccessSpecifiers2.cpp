#include <iostream>
using namespace std;

class BaseClass
{
private:
    int x = 10;

protected:
    int y = 10;

public:
    int z = 10;
    void printProtecteddata()
    {
        cout << "x : " << x << endl;
    }
    void printPrivatedata()
    {
        cout << "Y : " << y << endl;
    }
};
class DerivedClass : public BaseClass
{
    /*
        only
        public int z returns

    */
};
// class DerivedClass : protected BaseClass
//  {
//      /*
//         protected int z returns
//      */
//  };
void Function(BaseClass obj)
{
    // obj.printPrivatedata();
    // obj.printProtecteddata();
    // cout << "Z : " << obj.z << endl;
}
int main()
{
    BaseClass b1;
    DerivedClass b2;
    cout << "Z : " << b2.z << endl;
    Function(b1);
    return 0;
}