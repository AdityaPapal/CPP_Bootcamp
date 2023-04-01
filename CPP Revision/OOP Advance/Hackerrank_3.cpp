#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle
{
private:
    int h, w;

public:
    void setdata(int height, int width)
    {
        h = height;
        w = width;
    }
    int displayHeight()
    {
        return h;
    }
    int displaywidth()
    {
        return w;
    }
};

class RectangleArea : public Rectangle
{
public:
    void display()
    {
        int height = displayHeight();
        int width = displaywidth();
        cout << height << " " << width << endl;
        cout << height * width;
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int height, width;
    cin >> height >> width;

    RectangleArea A;

    A.setdata(height, width);
    A.display();

    return 0;
}
