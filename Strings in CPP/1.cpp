#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "ADITYA";
    cout << "Name is: " << str1 << endl;

    char str2[50];
    cout << "Enter the name: " << endl;
    cin >> str2;                         // Input:- ADITYA PAPAL----- OUTPUT:- ADITYA
    cout << "Name is: " << str2 << endl; // Without geting space

    char str3[100];
    cout << "Enter the name: " << endl;
    cin.getline(str3, 100);
    cout << "Name is: " << str3 << endl;
    return 0;
}