#include <iostream>
using namespace std;

int main()
{
    int var=10;

    int *ip;

    ip=&var;

    cout<<"Value without pointer: "<<var<<endl;
    cout << "Address of pointer: " << ip << endl;
    cout << "Value with pointer: " << *ip << endl<<endl;

    //change the var Value using pointer

    *ip= 20;

    cout << "Value without pointer: " << var << endl;
    cout << "Address of pointer: " << ip << endl;
    cout << "Value with pointer: " << *ip << endl
          << endl;

    return 0;
}