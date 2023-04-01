#include <iostream>
using namespace std;

class Myclass
{
public:
    int x;
    static int y;

    Myclass()
    {
        y++;
    }
};
// initialization
int Myclass ::y = 0;

int main()
{
    cout << "Initial value of y: " << Myclass::y << endl;

    Myclass obj1, obj2; // default constructor called
    cout << "After increament vlaue of y: " << Myclass::y << endl;

    return 0;
}