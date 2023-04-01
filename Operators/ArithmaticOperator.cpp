#include<iostream>
using namespace std;

int main()
{
    int x, y;   
    cout << "Enter the First number:";
    cin >> x;
    cout << "Enter the Second number:";
    cin >> y;
    
    cout<<"Addition of this number is: "<<x+y<<endl;
    cout<<"Subtraction of this number is: "<<x-y<<endl;
    cout<<"Multiplication of this number is: "<<x*y<<endl;
    cout<<"Divison of this number is: "<<x/y<<endl;
    cout<<"Modulus of this number is: "<<x%y<<endl;
    cout<<"Increment of First number is: "<<++x<<endl;
    cout<<"Decrement of Second number is: "<<--y<<endl;
    return 0; 
}