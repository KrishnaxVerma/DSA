#include <iostream>
using namespace std;

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
    cout<<endl<<"Given array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<size-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
    cout<<endl<<"Alternatively swapped array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}