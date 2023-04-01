#include <iostream>
using namespace std;

struct person
{
    char name[100];
    int age;
    double salary;
};

int main()
{
    cout << "---:strucure:---" << endl;

    person p1, p2;

    cout << "Enter the first person details:" << endl;
    cout << "Enter the person name: ";
    cin.getline(p1.name, 100);

    cout << "Enter the person age: ";
    cin >> p1.age;

    cout << "Enter the person salary: ";
    cin >> p1.salary;

    cout << endl;
    cout << "First Person Details: " << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;

    return 0;
}