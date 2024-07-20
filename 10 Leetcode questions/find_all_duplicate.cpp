#include <iostream>
using namespace std;

void findduplicate(int arr[], int size){
    cout<<"Duplicate element in array are: "<<endl;
    for(int i=0;i<size;i++){
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                // i++;
                break;
            }
        }
        
    }
}
int main(){
    int arr[]={1,1,2,2,3,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    findduplicate(arr,size);
    return 0;
}