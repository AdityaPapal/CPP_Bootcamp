#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "---:CURRENCY CONVERTER:---\n";

    double dollar;
    string currency;

    cout << "Enter an American dollar which won't to conert: ";
    cin >> dollar;

    double pound = dollar * 0.73;
    double eur = dollar * 0.86;
    double INR = dollar * 75.13;

    cout << "Enter the Currency for convertion (INR,EUR,GBP)";
    cin >> currency;

    // cout << "Select follwing options to convertion: \n";
    // cout << "1: USD to GBP\n";
    // cout << "2: USD to EUR\n";
    // cout << "3: USD to INR\n";
    // cout << "4: GBP to USD\n";
    // cout << "5: EUR to USD\n";
    // cout << "6: INR to USD\n";
    // cout << "7: USD to GBP\n";
    if (currency == "INR")
    {
        cout << dollar << " Dollars in Rupees is " << INR << endl;
    }
    else if (currency == "EUR")
    {
        cout << dollar << " Dollars in Euro is " << eur << endl;
    }
    else if (currency == "GBP")
    {
        cout << dollar << " Dollars in Pounds is " << pound << endl;
    }
    else
        cout << " Invalid Input! Please Try Again ";
}