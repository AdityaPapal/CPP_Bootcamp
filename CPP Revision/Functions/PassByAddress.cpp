#include <iostream>
using namespace std;

void passByaddress(int *x,int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;

}
int main()
{
    int a = 10, b = 20;
    cout << "---:Before swapping:---" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    passByaddress(&a, &b);//here we can pass by address of a & b 
    cout << "---:After swapping:---" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}