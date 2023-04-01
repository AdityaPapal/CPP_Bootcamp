#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << "Enter the string: " << endl;
    string obj;
    getline(cin, obj);
    cout << "Name is: " << obj << endl;
    cout << "Name lenght: " << obj.length() << endl;
    return 0;
}