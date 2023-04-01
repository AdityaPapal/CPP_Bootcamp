#include <iostream>
// check which nuber is largest using logical
using namespace std;

int main()
{
  cout << " ----:Largest of 3 numbers:---- " << endl;
  int i, j, k;
  cout << "Enter the 3 numbers" << endl;
  cin >> i >> j >> k;

  if ((i > j) && (i > k)) // In this two conditions i>j and i>k are ture then code execute in if condition
  {
    // i is greater
    cout << "The largest number is: " << i;
  }
  else if ((j > i) && (j > k))
  {
    /* j is greater  */
    cout << "The largest number is: " << j;
  }
  else
  {
    // k is greater
    cout << "The largest number is: " << k;
  }

  return 0;
}