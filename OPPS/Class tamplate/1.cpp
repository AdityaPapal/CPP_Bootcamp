#include <iostream>
using namespace std;

template <typename I, typename F>
class weight
{
private:
    I kg;
    F grams;

public:
    void setdata(I x, F y)
    {
        kg = x;
        grams = y;
    }
    I getkgdata()
    {
        return kg;
    }
    F getgramdata()
    {
        return grams;
    }
};

int main()
{
    weight<int, float> obj;
    obj.setdata(4, 5.35);
    cout << "values of weight in kg is: " << obj.getkgdata() << endl;
    cout << "Value of weight in grams is: " << obj.getgramdata() << endl;
    return 0;
}