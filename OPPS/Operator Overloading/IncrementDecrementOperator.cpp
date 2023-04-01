#include <iostream>
using namespace std;

class Weight
{
private:
    int kg;

public:
    Weight()
    {
        kg = 0;
    }
    Weight(int w)
    {
        kg = w;
    }
    void print()
    {
        cout << "Weight in kg is: " << kg << endl;
    }
    Weight operator++() // post increment
    {
        ++kg;
    }
    Weight operator++(int) // pre increment
    {
        kg++;
    }
    Weight operator--() // post decrement;
    {
        --kg;
    }
    Weight operator--(int) // pre decrement
    {
        kg--;
    }
};

int main()
{
    Weight w1;
    // increment
    w1.print();
    ++w1;
    w1.print();
    w1++;
    w1.print();

    // decrement
    --w1;
    w1.print();
    w1--;
    w1.print();

    return 0;
}