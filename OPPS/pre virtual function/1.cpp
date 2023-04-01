#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void getArea() = 0; // pre virtual function
};
class Circle : public Shape
{
public:
    void getArea()
    {
        cout << "Enter circle Radius: " << endl;
        int r;
        cin >> r;
        cout << "Area of a circle is : " << (3.14 * r * r) << endl;
    }
};
class Rectangle : public Shape
{
public:
    void getArea()
    {
        cout << "Enter Length and breght of rectangle: " << endl;
        int l, b;
        cin >> l >> b;
        cout << "Area of a circle is : " << (l * b) << endl;
    }
};
int main()
{
    Circle c1;
    c1.getArea();

    Rectangle r1;
    r1.getArea();

    return 0;
}