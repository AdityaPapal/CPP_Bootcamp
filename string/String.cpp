#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a = "aditya";
    cout << a<<endl;
    string firstname = "Aditya";
    string lastname = " Papal";
    string fullname = firstname.append(lastname);// Append funtion is used to add 2 strings
    cout<<fullname<<endl;
    string fullname2 = firstname + lastname;// we can use + opearator also
    cout<<fullname<<endl;
    return 0;
}