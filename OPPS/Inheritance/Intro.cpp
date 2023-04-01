#include <iostream>
using namespace std;

// base class
class Shape
{
protected:
    int width;
    int height;

public:
    void setwidth(int w)
    {
        width = w;
    }
    void setheight(int h)
    {
        height = h;
    }
};
// derived class
class Rectangle : public Shape
{
public:
    int getarea()
    {
        return (width * height);
    }
};
int main()
{

    Rectangle rect1;
    rect1.setheight(5);
    rect1.setwidth(10);

    // Total area is

    cout << "Total area is: " << rect1.getarea() << endl;

    return 0;
}