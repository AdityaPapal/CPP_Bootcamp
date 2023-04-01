// Basic array
#include<iostream>
using namespace std;

int main(){

int arr[4];
cout<<"Enter the 4 values for array: ";
for (int i = 0; i < 4; i++)
{
    cin>>arr[i];
}
cout<<"Array values is: ";
for(int i=0;i< 4; i++)
{
    cout<<arr[i]<<" ";
}



}