#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "---:File Write Operation:---" << endl;

    char arr[100];
    cout << "Enter your name and age: " << endl;
    cin.getline(arr, 100); // here we used getline operation becouse of in getline we can also uesd space(" ")

    // datatype filename(main file)
    ofstream myfile("  abc.txt", ios::app);
    myfile << arr << endl;
    myfile.close();

    cout << "File Write Operation prefromed Successfully" << endl
         << endl;

    // cout << "READING FROM FILE OPERATION STARTED" << endl;
    // char arr1[100];
    // ifstream obj("  abc.txt");
    // obj.getline(arr1, 100);
    // cout << "Array content: " << arr1 << endl;
    // cout << "File Reading Operation Completed" << endl;
    // obj.close();
    return 0;
}