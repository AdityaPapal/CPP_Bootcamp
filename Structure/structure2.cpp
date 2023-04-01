#include <iostream>
#include <string>
using namespace std;

/*
    create a variable struct type, create a pointer and point to it nd use the pointer to take input
    and display output
*/
struct person
{
    string name;
    // char name[100];
    int age;
    int salary;
};
int main()
{
    cout << "---: Pointers to the structure :---" << endl;
    person p1;

    // cout << "Enter Person details: " << endl;
    // cout << "Enter the name: ";
    // cin >> p1.name;
    // cout << "Enter the age: ";
    // cin >> p1.age;
    // cout << "Enter the salary: ";
    // cin >> p1.salary;

    // cout << endl;
    // cout << "Person Details: " << endl;
    // cout << "Name: " << p1.name << endl;
    // cout << "Age: " << p1.age << endl;
    // cout << "Salary: " << p1.salary << endl;

    person *ptr = &p1;

    cout << "Enter Person details: " << endl;
    cout << "Enter the name: ";
    cin >> ptr->name;
    cout << "Enter the age: ";
    cin >> ptr->age;
    cout << "Enter the salary: ";
    cin >> ptr->salary;

    cout << endl;
    cout << "Person Details: " << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Salary: " << ptr->salary << endl;

    return 0;
}