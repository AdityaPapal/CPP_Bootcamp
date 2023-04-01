#include <iostream>
using namespace std;

void passByReferance(int &x, int &y)// here a & b are pointing to x & y
{
    int temp=x;
    x=y;
    y=temp;

}
int main()
{
    int a = 10, b = 20;
    cout << "---:Before swapping:---" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    passByReferance(a, b); 
    cout << "---:After swapping:---" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}