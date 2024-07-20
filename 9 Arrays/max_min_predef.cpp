#include <iostream>
#include<limits.h>
using namespace std;

int max(int arr[],int size){
    int result=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        result=max(result,arr[i]);
    }
    return result;
}
int min(int arr[],int size){
    int result=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        result=min(arr[i],result);
    }
    return result;
}
int main(){
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout<<"Maximum value: "<<max(arr,size);
    cout<<"Minimum value: "<<min(arr,size);

    return 0;
}