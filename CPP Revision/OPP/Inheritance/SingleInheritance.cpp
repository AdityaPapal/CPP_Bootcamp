#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void speek()
    {
        cout << "speeking" << endl;
    }
};

class dog : public Animal
{
public:
};

int main()
{
    dog d;
    d.speek();
    return 0;
}