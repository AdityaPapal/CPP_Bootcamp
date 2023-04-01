#include <iostream>
using namespace std;
class A
{
public:
    void sayHello()
    {
        cout<<"Hello Aditya"<<endl;
    }
    void sayHello(string name) {
        cout << "Hello "<<name << endl;
    }
};

int main()
{
    A ob1;
    ob1.sayHello();
    return 0;
}