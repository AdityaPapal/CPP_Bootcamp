#include<iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter the firt number:";
    cin>>x;     
    cout<<"Enter the second number: ";
    cin >> y;
    
    cout<<(x<y && y>x)<<endl;
    cout<<(( x>=y)||( y=32))<<endl;

    return 0; 
}