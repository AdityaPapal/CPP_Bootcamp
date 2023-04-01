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

void Function(BaseClass obj)
{
    obj.printPrivatedata();
    obj.printProtecteddata();
    cout << "Z : " << obj.z << endl;
}

int main()
{
    BaseClass b1;
    Function(b1);
    return 0;
}