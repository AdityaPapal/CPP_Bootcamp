#include <iostream>
// check whether number is palindrome or not
// Palindrome number ==  121 -- 121 after reversal its an equal
using namespace std;

int main()
{
    int i, num, dig, rev = 0;
    cout << "Enter the number: ";
    cin >> num; // 121

    while (num != 0)
    {
        dig = num % 10;         // 121 % 10 = 1  -- 12 %10 == 2
        rev = (rev * 10) + dig; // 0*10+1= 1     -- 1*10+ 2== 12
        num = num / 10;         // 121/10 = 12   -- 12 / 10 = 2
    }
    if (i = rev)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not Palindrome Number" << endl;
    }

    return 0;
}