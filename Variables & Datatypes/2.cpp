#include<iostream>
using namespace std;

/*
   int     --->  4  Bytes  
   float   --->  4  Bytes
   double  --->  8  Bytes
   char    --->  1  Bytes 
   bool    --->  1  Bytes
*/
  //  [datatype]varibles name (identifiers)
  
int main ()
{
    int a = 12; //Stores whole numbers, without decimals
    float b = 1.35; // it is store a decimals number ,sufficient for storing 7 decimal digits
    double c = 34.34; //it is store a decimals number ,sufficient for storing 15 decimal digits
    char d = 'A'; //Stores a single character/letter/number, or ASCII values
    string e = "ADITYA"; //store contains a collection of characters 
    bool f = true; //Stores true or false values

    cout << "The value of Variable 'a' is : " << a;
    cout << "\nThe value of Variable 'b' is : " << b;
    cout << "\nThe value of Variable 'c' is : " << c;
    cout << "\nThe value of Variable 'd' is : " << d;
    cout << "\nThe value of Variable 'e' is : " << e;
    cout << "\nThe value of Variable 'f' is : " << f;
    return 0;
}
