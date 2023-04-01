#include <iostream>
using namespace std;

class Animal
{
public:
    void animalsound()
    {
        cout << "Animal Sound" << endl;
    }


class Dogs : public Animal
{
public:
    void animalsound()
    {
        cout << "Dogs Barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void animalsound()
    {
        cout << "Cat Meows" << endl;
    }
};
int main()
{
    Animal A1;
    A1.animalsound();
    Dogs D1;
    D1.animalsound();
    Cat C1;
    C1.animalsound();
    return 0;
}