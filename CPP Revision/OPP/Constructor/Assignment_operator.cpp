#include <iostream>
using namespace std;

class Hero
{
private:
    int helth;
    char level;

public:
    
    Hero(int H,char l)
    {
        cout << "paramiterised Constructor Called" << endl;
        helth=H;
        level=l;

        
    }
    void print()
    {
        cout << "copy constructor called" << endl;
        cout << "Value of helth: " << helth << endl;
        cout << "Value of Level: " << level << endl;
    }
};

int main()
{
    Hero H1(10,'A'),H2(20,'B');
    H1=H2;
    H1.print();

    return 0;
}