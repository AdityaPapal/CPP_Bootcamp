#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    int weight;
    int height;
    int Age;

public:
    int setAge(int age)
    {
        Age = age;
        cout << "Age :" << Age << endl;
    }
    int setWeight(int w)
    {
        weight = w;
    }
};
class Male : protected Human
{
public:
    string Colour;

    void sleep()
    {
        cout << "Male sleepping " << endl;
    }

    void setheight(int h)
    {
        height=h;
    cout<<"Height = "<<height<<endl;
    }
};

int main()
{
    Male M1;

    M1.setheight(20);

    // cout<<M1.height<<endl;

    /*
    M1.setAge(19);
    M1.sleep();
    */
    return 0;
}