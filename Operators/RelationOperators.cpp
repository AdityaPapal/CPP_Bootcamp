#include<iostream>
using namespace std;

/*
   == --->  Equal to
   != --->  Not Equal
    < --->  Less than
    > --->  Greater than
   <= ---> Less than or Equal
   >= ---> Greater than or Equal
*/

int main()
{
    int x, y;

    cout << "Enter the First number: ";
    cin>>x;
    cout << "Enter the Second number: ";
    cin>>y;

    cout <<(x==y)<<endl;
    cout <<(x!=y)<<endl;
    cout <<(x<y)<<endl;
    cout <<(x>y)<<endl;
    cout <<(x<=y)<<endl;
    cout <<(x>=y)<<endl;    

    return 0; 
}