#include<iostream>
using namespace std;
//variable = (condition) ? expressionTrue : expressionFalse;

int main()
{
    int i=5, j=10;
    string greaternum = (i > j) ? "its greater " : "its samller ";
    cout << greaternum ;
    return 0; 
}