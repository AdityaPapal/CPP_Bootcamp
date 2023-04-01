#include <iostream>
using namespace std;

class Hero
{
private:
    int helth;
public:
    // Hero(int he)
    // {
    //     cout << "paramiterised Constructor Called" << endl;
    //     helth =he;
    //     cout<<"Value of he: "<<helth<<endl;
    // }
    //using this keywords
    Hero(int helth)
    {
        cout << "paramiterised Constructor Called" << endl;
        helth = helth;
        cout << "Value of he: " << helth << endl;
    }
};

int main()
{
    Hero h1(10);
    return 0;
}