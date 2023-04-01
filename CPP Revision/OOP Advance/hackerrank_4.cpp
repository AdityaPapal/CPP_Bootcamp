#include <iostream>
using namespace std;

int main()
{
    int arr[1000], size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < size; i++)
    {

        if (max < arr[i])
        {
            swap(max, arr[i]);
        }
    }
    //cout << max;

    int min = arr[0];
    for (int i = 0; i < size; i++)
    {

        if (min > arr[i])
        {
            swap(min, arr[i]);
        }
    }
    //cout << min;

    cout<<"Result = "<<max-min;



    return 0;
}