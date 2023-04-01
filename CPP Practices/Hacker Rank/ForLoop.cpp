#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2;
    string num[10] = {"zero",
                      "one",
                      "two",
                      "three",
                      "four",
                      "five",
                      "six",
                      "seven",
                      "eight",
                      "nine"};

    cin >> num1;
    cin >> num2;
    for (int i = num1; i <= num2; i++)
    {
        cout << num[i] << endl;
        if (i == num2)
        {
            for (int i = num1; i <= num2; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "even" << endl;
                }
                else
                {
                    cout << "odd" << endl;
                }
            }
        }
    }

    return 0;
}