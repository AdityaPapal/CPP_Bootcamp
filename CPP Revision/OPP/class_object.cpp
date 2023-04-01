#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    string company_name;
    string Model_name;
    string fuel_name;
    float mileage;
    double price;

public:
    void set_data(string Cname, string Mname, string Fname, float Mil, double P)
    {

        company_name = Cname;
        Model_name = Mname;
        fuel_name = Fname;
        mileage = Mil;
        price = P;
    }
    void display_data()
    {
        cout << "---:Display Data:---" << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Model Name: " << Model_name << endl;
        cout << "Fuel Type: " << fuel_name << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{

    car C1;

    string Campany, model, fuel;
    float mileage;
    double price;

    cout << "Enter the company Name: ";
    cin >> Campany;

    cout << "Enter the Moel : ";
    cin >> model;

    cout << "Enter the Fuel Type ";
    cin >> fuel;

    cout << "Enter the Mileage: ";
    cin >> mileage;

    cout << "Enter the prince: ";
    cin >> price;

    C1.set_data(Campany,model,fuel,mileage,price);
    C1.display_data();



    return 0;
}