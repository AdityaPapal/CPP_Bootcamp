#include <iostream>
#include <string>
// Introduction to Class & Objects
using namespace std;

class Cars
{
private:
    // member variables or data members
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    int price;

public:
    // Default Constructors
    Cars()
    {
        cout << "Defult Constructor Called" << endl;
        // company_name = "BMW";
        // model_name = "M8";
        // fuel_type = "Petrol";
        // mileage = 8;
        // price = 25000000;
    }
    // parameterized constructor
    Cars(string cName, string mName, string fType, float m, int p)
    {
        cout << "Paprameterized Constructor Called" << endl;
        company_name = cName;
        model_name = mName;
        fuel_type = fType;
        mileage = m;
        price = p;
    }
    Cars(Cars &obj)
    {
        cout << "Copy Constructor Called" << endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;
    }
    // member function
    void setdata(string cName, string mName, string fType, float m, int p)
    {
        company_name = cName;
        model_name = mName;
        fuel_type = fType;
        mileage = m;
        price = p;
    }
    void displaydata()
    {
        cout << "---:Cars Propertis:---" << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Fule used: " << fuel_type << endl;
        cout << "Mileage km/hr: " << mileage << endl;
        cout << "Price: " << price << endl
             << endl;
    }
    ~Cars()
    {
        cout << "Destructors Called" << endl;
    }
};
int main()
{
    // Objects are nothing but variables of types class
    Cars car1, car2("BMW", "M4", "petrol", 12, 15000000);
    car1.setdata("BMW", "M8", "Petrol", 8, 25000000);
    car1.displaydata();
    car2.displaydata();
    Cars car3;
    car3 = car1;
    car3.displaydata();
    return 0;
}
/*
    default constructos is used to show defalut value without using set data function
*/