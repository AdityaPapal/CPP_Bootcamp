#include <iostream>
using namespace std;
int sum(int num)
{
    if (num != 0)
    {
        return (num + sum(num - 1));
    }
    else
        return num;
}
int main()
{
    cout << "Enter the num: ";
    int n;
    cin >> n;
    int total_sum = sum(n);
    cout << "The sum of the numbers is: " << total_sum << endl;
    return 0;
}