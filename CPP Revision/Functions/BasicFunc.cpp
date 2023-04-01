#include <iostream>
using namespace std;

int Max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
void msg()
{
    cout<<"Im Aditya";
}

int main()
{

    int a, b;
    cout << "Enter the two Number: " << endl;
    cin >> a >> b;
    
    cout <<"Greatest number is : "<< Max(a, b) << endl;

    msg();

    return 0;
}