#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    // data members
    int real;
    float imaginary;

public:
    // Members function
    ComplexNumber()
    {
    }
    ComplexNumber(int r, float i)
    {
        real = r;
        imaginary = i;
    }
    void DisplayData()
    {
        cout << "Complex Number is: " << real << " + " << imaginary << "i" << endl
             << endl;
    }
    int getrealpart()
    {
        return real;
    }
    float getimaginarypart()
    {
        return imaginary;
    }
};
// Passing object as argument in the function

ComplexNumber sumofnumber(ComplexNumber n1, ComplexNumber n2)
{
    int r;
    float i;
    r = n1.getrealpart() + n2.getrealpart();
    i = n1.getimaginarypart() + n2.getimaginarypart();
    ComplexNumber temp(r, i); // return object from the function
    return temp;
}
int main()
{
    ComplexNumber com1(5, 6), com2(2, 4), com3;
    com1.DisplayData();
    com2.DisplayData();

    cout << "Addition of two complex number: " << endl;
    com3 = sumofnumber(com1, com2);
    com3.DisplayData();

    cout << "Pointer to the objects: " << endl;
    ComplexNumber *ptr;
    ptr = &com3;
    ptr->DisplayData();

    cout << "Pointer to the objects 1: " << endl;
    ptr = &com1;
    ptr->DisplayData();

    cout << "Pointer to the objects 2: " << endl;
    ptr = &com2;
    ptr->DisplayData();
    return 0;
}