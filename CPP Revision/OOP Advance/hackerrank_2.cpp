#include <iostream>
using namespace std;

class A
{
private:
    int val;

public:
    void setdata(int a)
    {
        val = a;
    }
    int displaydata1()
    {
        val = val * 2;
        return val;
    }
};

class B : public A
{
public:
    int displaydata2()
    {
        int b = displaydata1();
        b = b * 3;
        return b;
        // cout << "new_val = " << b;
    }
};
class c : public B
{
public:
    int displaydata3()
    {
        int c = displaydata2();
        c *= 5;
        return c;
    }
};
class D : public c
{
public:
    void displaydata()
    {
        cout << "Value = " << displaydata3() << endl;
        cout << "A's func called 1 times" << endl;
        cout << "B's func called 1 times" << endl;
        cout << "C's func called 1 times" << endl;
    }
};
int main()
{
    D obj;

    int val;
    //cout << "new_val = ";
    cin >> val;

    obj.setdata(val);
    obj.displaydata();
    return 0;
}
