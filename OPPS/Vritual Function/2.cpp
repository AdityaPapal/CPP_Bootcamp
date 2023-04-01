#include <iostream>
using namespace std;

class Animal
{
private:
    /* data */
public:
    virtual void eat()
    {
        cout << "It's eat generic food" << endl;
    }
};
class Cat : public Animal
{
    void eat()
    {
        cout << "It's eat cat food" << endl;
    }
};
class Dogs : public Animal
{
    void eat()
    {
        cout << "It's eat Dog food" << endl;
    }
};
void function1(Animal *xyz)
{
    xyz->eat();
}
int main()
{
    Animal *ptr;

    Cat catobj;

    Dogs dogobj;

    ptr = &catobj;
    function1(ptr);

    ptr = &dogobj;
    function1(ptr);

    return 0;
}