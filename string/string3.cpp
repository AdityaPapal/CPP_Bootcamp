#include<iostream>
using namespace std;

int main()
{
    string a = "ADITYA";
    cout << a[1]<<endl; // using this we can access any characters in string

    string b = "ADITYA";
    b[0] = 'P';// we can also replace the characters
    cout << b;
    return 0; 
}