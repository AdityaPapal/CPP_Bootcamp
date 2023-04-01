#include <iostream>
using namespace std;

class Myclass
{
private:
    int x;
    static int y;

public:
    Myclass()
    {
        y++;
    }
    static int getvalue()
    {
        return y;
    }
};
// initialization
int Myclass ::y = 0;

int main()
{
    cout << "Initial value of y: " << Myclass::getvalue() << endl;

    Myclass obj1, obj2; // default constructor called
    cout << "After increament vlaue of y: " << Myclass::getvalue() << endl;

    return 0;
}