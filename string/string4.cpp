#include<iostream>
using namespace std;

int main()
{
    string name;
    string name2;
    cout << "Enter your name: ";
    cin>> name;
    cout << "Name is: " << name<<endl;

    cout<<"Enter the name: ";
    //getline(cin, name2);// getline()--->
    cin>> name2;
    cout<<name2<<endl;
    return 0; 
}