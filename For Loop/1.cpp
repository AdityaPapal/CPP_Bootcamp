#include<iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number";
    cin>>x;

    for (size_t i = 0; i < x; i++)
    {
        cout<<i<<endl;
    }
    
    return 0; 
}