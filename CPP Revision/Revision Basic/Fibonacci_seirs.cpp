#include <iostream>
using namespace std;

int main()
{
    int num,first =0,second =1,next;
    cout<<"Enter the number of terms for FibonacciSeirs : ";
    cin>>num;

    for (int i = 0; i < num; i++)
    {
        cout<<first<<endl;//0  1
        next=second+first;//1  2


        first=second;//1  //1
        second=next;//1  2
    }
    
}