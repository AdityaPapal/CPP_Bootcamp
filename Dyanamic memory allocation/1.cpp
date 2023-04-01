#include <iostream>
using namespace std;

int main()
{
  cout << "---:Dynamic Memory Allocation " << endl;


  int size;
  int *ptr;

  cout << "Enter the size of array: " << endl;
  cin >> size;

  ptr = new int[size];

  cout << "Enter the element in array: " << endl;
  for (size_t i = 0; i < size; i++)
  {
    cin >> ptr[i];
  }

  cout << "Value of Arrays: " << endl;
  for (size_t i = 0; i < size; i++)
  {
    cout << ptr[i] << endl;
  }
  return 0;
}  