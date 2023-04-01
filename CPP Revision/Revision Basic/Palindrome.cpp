#include<iostream>
using namespace std;

int main()
{
    int n,num,digit,rev =0;
    cout<<"Enter the Number: ";
    cin>>num;
    n=num;

    while (num!=0)
    {
       digit = num%10;
       rev = (rev*10) + digit;
       num = num/10;
    }

    if (rev==n)
    {
      cout<<"Number is Palindrome"<<endl;   
    }
    else
    {
        cout<<"Number is not Palindrome"<<endl;
    }    
}