#include <iostream>
using namespace std;

int first(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int last(int arr[], int size, int key)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int firstbybinary(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastbybinary(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 6, 7, 8, 9, 9, 9};
    int size = sizeof(arr) / sizeof(int);
    int key = 2;
    cout << "First and Last postion of " << key << " in array is:" << endl;
    cout << first(arr, size, key) << " " << last(arr, size, key) << " Using linear search" << endl;
    cout << firstbybinary(arr, size, key) << " " << lastbybinary(arr, size, key) << " Using Binary search" << endl;
    return 0;
}