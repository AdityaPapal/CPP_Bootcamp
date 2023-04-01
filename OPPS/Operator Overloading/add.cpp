#include <iostream>
using namespace std;

class Add
{
private:
    int num;

public:
    Add()
    {
        num = 0;
    }
    Add(int i)
    {
        num = i;
    }
    void print()
    {
        cout << "Value : " << num << endl;
    }
    Add operator++()
    {
        Add temp;
        temp.num = ++num;
        return num;
    }
    // Add operator++(int)
    // {
    //     Add temp;
    //     temp.num = num++;
    //     return num;
    // }
    // Add operator++()
    // {
    //     Add temp;
    //     temp.num = --num;
    //     return num;
    // }
    // Add operator++(int)
    // {
    //     Add temp;
    //     temp.num = num--;
    //     return num;
    // }
};
int main()
{
    Add a1, a2, a3;

    a2.print();
    ++a2;
    a2.print();
    a1 = ++a1;

    a1.print();
    return 0;
}