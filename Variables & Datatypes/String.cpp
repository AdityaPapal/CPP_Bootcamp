#include<iostream>
using namespace std;

int main()
{
    string a = "aditya";
    cout << a<<endl;
    string firstname = "Aditya";
    string lastname = " Papal";
    string fullname = firstname.append(lastname);//append function is used to add the string    
    cout<<fullname<<endl;
    string fullname = firstname+lastname; // + operator can also used 
    return 0;
}