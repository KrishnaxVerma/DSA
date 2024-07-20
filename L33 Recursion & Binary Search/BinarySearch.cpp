#include <iostream>
using namespace std;

void printarr(int *arr, int start, int end){
    cout<<"Size of array is : "<<end-start+1<<endl;
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool IsFound(int *arr,int start,int end,int key){

    printarr(arr,start,end);

    //element not found
    if(start>end){
        return false;
    }

    int mid=start+(end-start)/2;

    //element found
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
        IsFound(arr,start,mid-1,key);
    }
    else{
        IsFound(arr,mid+1,end,key);
    }
}
int main(){
    int arr[]={1,3,6,9,12,15,18,21,24,27,30,33};
    int size=12;
    int key=30;
    int start=0,end=size-1;
    bool ans=IsFound(arr,start,end,key);
    if(ans){
        cout<<"Key is found";
    }
    else{
        cout<<"Key is not found";
    }
    return 0;
}