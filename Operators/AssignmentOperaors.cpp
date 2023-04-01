#include<iostream>
using namespace std;

int main()
{ 
    int x, y;   
    cout << "Enter the First number:";
    cin >> x;
    cout << "Enter the Second number:";
    cin >> y;

    x +=y;
    cout<<"After Sum value of x is "<<x<<endl;

    x -= y;
    cout<<"After Sub value of x is "<<x<<endl;

    x *= y;
    cout<<"After Mul value of x is "<<x<<endl;

    x /= y;
    cout<<"After Divi value of x is "<<x<<endl;

    x %= y;
    cout<<"After Mols value of x is "<<x<<endl;

    x += 2;
    cout<<"After Incre value of x is "<<x<<endl;
    x -= 2;
    cout<<"After Decre value of x is "<<x<<endl;

    return 0; 
}