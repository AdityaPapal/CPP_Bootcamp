#include <iostream>
using namespace std;

int main()
{
    cout << "---:Pointers:---" << endl;
    int val = 5;
    //datatype *pointername
    int *ip;    //Pointer to a intiger
    float *fp;  // pointer to a float
    double *dp; //pointer to a double
    char *ch;   // pointer to a char

    ip = &val;
    cout << "Variable value: " << val << endl;
    cout << "Address in a pointer: " << ip << endl;
    cout << "Pointer pointing to value: " << *ip << endl;

    // changing variable value using pointer

    *ip = 10;
    cout << endl;
    cout << "Variable value: " << val << endl;
    cout << "Address in a pointer: " << ip << endl;
    cout << "Pointer pointing to value: " << *ip << endl;

    return 0;
}