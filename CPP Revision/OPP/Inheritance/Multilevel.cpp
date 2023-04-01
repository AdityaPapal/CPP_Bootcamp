#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void Bark()
    {
        cout << "barking" << endl;
    }
};

class human
{
public:
    int age;

public:
    void speek()
    {
        cout << "speeking" << endl;
    }
};

class Hybrid : public Animal, public human
{

};

int main()
{

    Hybrid h1;

    h1.speek();
    h1.Bark();

    /*
    dog d;
    d.speek();
    */

    return 0;
}