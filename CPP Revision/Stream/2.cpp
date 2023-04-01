#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string a = "I'm Aditya";
    string st2;

    // writing content from file
    // ofstream out("demo.txt");
    // out << a;

    // reading content from file
    ifstream in("demo.txt");
    // in >> st2;

    getline(in, st2);

    cout << "Reading from file" << endl;
    cout << st2 << endl;

    return 0;
}