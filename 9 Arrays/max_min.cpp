#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    //don't use variable in array
    //bad practice
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] > max)
        {
            max = arr[i + 1];
        }
        else if (arr[i + 1] < min)
        {
            min = arr[i + 1];
        }
    }
    cout << endl
         << "Maximum value is: " << max << endl;
    cout << "Minimum value is: " << min << endl;

    return 0;
}