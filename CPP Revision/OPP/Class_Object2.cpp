#include <iostream>
using namespace std;

class Hero
{
private:
    int helth;

public:
    char level;

    int getHelth()
    {
        return helth;
    }
    void setHelth(int h)
    {
        helth = h;
        cout<<"helth : "<<helth<<endl;
    }
};
int main()
{
    Hero h1;
    // cout<<"size : "<<sizeof(h1)<<endl;

    // h1.helth = 70;
    h1.level = 'A';
    // using getHelth
    //cout << "helth: " << h1.getHelth() << endl;

    // setHelth
    h1.setHelth(70);
   
    cout << "Level: " << h1.level << endl;

    return 0;
}