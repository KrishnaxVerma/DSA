#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i <size; i++)
    {
        if(arr[i]==key){
            return true;
        }
    }
    return false;
    
}
int main(){
    int key;
    int arr[10]={0,9,8,7,6,5,4,3,2,1};
    cout<<"Enter the element to search: ";
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"Key is found";
    }
    else{
           cout<<"Key is not found"; 
        }
    return 0;
}