#include <iostream>
using namespace std;

int sumofelement(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum =sum +arr[i];
    }
    return sum;
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
    cout<<"Sum of element is: "<<sumofelement(arr,size);
    return 0;
}