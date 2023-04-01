#include<iostream>
using namespace std;
//check wheter number is positive or negative   

int main()
{
    int x;
    cout << "Enter a number: ";
    cin>>x;
    
    if (x<0)
    {
        cout<<"Number is negative"<<endl;
    }
    else
    {
        cout<<"Number is positive"<<endl;
    }
    
    return 0; 
}