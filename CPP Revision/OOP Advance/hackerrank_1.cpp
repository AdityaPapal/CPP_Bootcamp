#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class equilateral
{
public:
    void display1()
    {
        cout << "I am an equilateral triangle" << endl;
    }
};
class isosceles : public equilateral
{
public:
    void display2()
    {
        cout << "I am an isosceles triangle" << endl;
    }
};

class triangle : public isosceles
{
public:
    void display3()
    {
        cout << "I am a triangle" << endl;
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    triangle obj;

    obj.display1();
    obj.display2();
    obj.display3();
    return 0;
}
