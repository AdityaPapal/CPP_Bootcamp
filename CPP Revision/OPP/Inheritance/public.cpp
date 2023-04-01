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
        cout<<"Age :"<<Age<<endl;
    }
    int setWeight(int w)
    {
        weight = w;
    }
};
class Male : public Human
{
public:
    string Colour;

    void sleep()
    {
        cout << "Male sleepping " << endl;
    }
};

int main()
{
    Male M1;
    M1.setAge(19);
    M1.sleep();

    return 0;
}