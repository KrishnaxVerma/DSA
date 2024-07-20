#include <iostream>
using namespace std;

void printarr(int *arr,int size){
    cout<<"Size of array is : "<<size<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//Linear Size
bool IsFound(int *arr,int size,int key){
    printarr(arr,size);
    if(size==0){
        return false;
    }
    
    if(arr[0]==key){
        return true;
    }

    return IsFound(arr+1,size-1,key);
}
int main(){
    int arr[]={3,2,7,6,5,6,9,0,8,1,5};
    int size=11;
    int key=0;
    bool ans=IsFound(arr,size,key);
    if(ans){
        cout<<"Key is found";
    }
    else{
        cout<<"Key is not found";
    }
    return 0;
}