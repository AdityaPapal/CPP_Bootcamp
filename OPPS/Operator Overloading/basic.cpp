#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void print()
    {
        cout << "Addition of compex is: " << real << " + " << imag << "i" << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
int main()
{
    Complex c1(2, 4);
    Complex c2(3, 6);
    Complex c3;

    c3 = c1 + c2;

    c3.print();

    return 0;
}