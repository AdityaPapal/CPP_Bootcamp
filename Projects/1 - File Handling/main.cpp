#include <iostream>
#include <fstream>
using namespace std;

struct student
{
    char name[100];
    char mail[100];
    char stream[100];
    double mob;
};
int main()
{
    int n;
    cout << "Enter the number of student:";
    cin >> n;
    student s[n];

    cout << "Students Inforamtion" << endl;

    for (size_t i = 0; i < n; i++)
    {
        cout << "\nInformation of student: " << (i + 1) << endl;
        cout << "Enter the name: ";
        cin >> s[i].name;
        cout << "Enter the Email i'd: ";
        cin >> s[i].mail;
        cout << "Enter the Mobile number: ";
        cin >> s[i].mob;
        cout << "which stream you wont: ";
        cin >> s[i].stream;
    }
    ofstream myfile("StdINFO.txt", ios::app);
    myfile << "---:Student Details:---" << endl
           << endl;
    for (size_t i = 0; i < n; i++)
    {
        myfile << "student: " << (i + 1) << endl
               << endl
               << " Name : " << s[i].name << endl
               << " Mail : " << s[i].mail << endl
               << " Mobile Number : " << s[i].mob << endl
               << " stream : " << s[i].stream << endl
               << endl;
    }
    myfile.close();

    // ofstream myfile2("StdINFO.xlsx", ios::app);
    // myfile2 << "---:Student Details:---" << endl
    //         << endl;
    // for (size_t i = 0; i < n; i++)
    // {
    //     myfile2 << "student: " << (i + 1) << endl
    //             << endl
    //             << " Name : " << s[i].name << endl
    //             << " Mail : " << s[i].mail << endl
    //             << " Mobile Number : " << s[i].mob << endl
    //             << " stream : " << s[i].stream << endl
    //             << endl;
    // }
    // myfile2.close();
    return 0;
}