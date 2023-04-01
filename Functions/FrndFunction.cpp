#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;

public:
    Distance()
    {
        meter = 0;
    }
    void DisplayData()
    {
        cout << "Meter values: " << meter << endl;
    }
    // prototype
    friend void addValue(Distance &d);
};
void addValue(Distance &d)
{
    d.meter = d.meter + 5;
}
int main()
{
    Distance d1;      // meter = 0
    d1.DisplayData(); // 0

    // friend function called
    addValue(d1); // pass by refrence
    cout << endl;
    d1.DisplayData(); // 5
    return 0;
}