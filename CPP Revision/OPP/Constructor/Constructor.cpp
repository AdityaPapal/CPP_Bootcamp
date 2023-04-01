#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string Company_Name;
    string Model_name;
    string Fuel_type;
    double Price;

public:
    Car(string Cname, string Model, string Fuel, double price)
    {
        Company_Name = Cname;
        Model_name = Model;
        Fuel_type = Fuel;
        Price = price;
    }
    void Display()
    {
        cout << "---:Display Data:---" << endl;
        cout << " Company Name: " << Company_Name << endl;
        cout << "Model Name: " << Model_name << endl;
        cout << "Fuel Name: " << Fuel_type << endl;
        cout << "Price: " << Price << endl;
    }
};

int main()
{
    string Cname, Mname, Ftype;
    double price;

    cout << "Enter the company Name: ";
    cin >> Cname;

    cout
        << "Enter the Model Name: ";
    cin >> Mname;

    cout
        << "Enter the Fuel type: ";
    cin >> Ftype;

    cout
        << "Enrter the price: ";
    cin >> price;

    Car car(Cname, Mname, Ftype, price);
    car.Display();

    return 0;
}