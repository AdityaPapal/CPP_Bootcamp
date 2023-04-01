#include <iostream>
#include <string>
/*
    Q) create an array of a structures and accept input and display output
    structure name : person
    data member : name , age , salary.

*/
using namespace std;

struct person
{
    string name;
    char name[100];
    int age;
    int salary;
};

int main()
{
    person p[2];
    cout << "Enter Person details: " << endl;
    for (size_t i = 0; i < 2; i++)
    {
        cout << "\nEnter " << (i + 1) << "st person details: " << endl;
        cout << "Enter the name: ";
        cin >> p[i].name;
        // cin.getline(p[i].name, 100);
        cout << "Enter the age: ";
        cin >> p[i].age;
        cout << "Enter the salary: ";
        cin >> p[i].salary;
    }
    cout << "Persons details: " << endl;
    for (size_t i = 0; i < 2; i++)
    {
        cout << "\nPerson " << (i + 1) << endl;
        cout << "Name: " << p[i].name << endl;
        cout << "Age: " << p[i].age << endl;
        cout << "Salary: " << p[i].salary << endl;
    }

    return 0;
}