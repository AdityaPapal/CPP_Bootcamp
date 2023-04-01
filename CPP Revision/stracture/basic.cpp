#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    int salary;
};
int main()
{

    int num;
    cout << "How many Person details do you wan't: ";
    cin >> num;
    cout << endl;
    Person p[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter a details of person" << (i + 1) << endl;
        cout << "Enter a Full Name: ";
        cin >> p[i].name;
        cout << "Enter a Age: ";
        cin >> p[i].age;
        cout << "Enter a Salary: ";
        cin >> p[i].salary;
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        cout << "Details of Person " << (i + 1) << endl;
        cout << "Name: " << p[i].name << endl;
        cout << "Age: " << p[i].age << endl;
        cout << "Salary: " << p[i].salary << endl;
    }
}