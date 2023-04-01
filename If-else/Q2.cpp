#include<iostream>
using namespace std;
//check wheter number is positive or nigetive or 0


int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;

    if (x<0)
    {
        cout<<"The number is Negative"<<endl;
    }
    else if (x>0)
    {
        cout<<"The number is Positive"<<endl;   
    }
    else
        cout<<"The number is nither positive nor nigative"<<endl;
    return 0; 
}