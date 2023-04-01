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
    Cars()
    {
        // This is Default Constructors
        company_name = "BMW";
        model_name = "M8";
        fuel_type = "Petrol";
        mileage = 8;
        price = 25000000;
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
        cout << "---:Cars Propertis:---" << endl
             << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Fule used: " << fuel_type << endl;
        cout << "Mileage km/hr: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    Cars car1, car2; // Objects are nothing but variables of types class
    // car1.setdata("BMW", "M8", "Petrol", 8, 25000000);
    car1.displaydata();
    /*
    default constructos is used to show defalut value without using set data function
    */
    return 0;
}