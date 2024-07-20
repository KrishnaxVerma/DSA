#include <iostream>
using namespace std;

int pivot(int arr[],int size){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while (start<end)
    {
        if(arr[mid]<arr[mid-1]){
            return mid;
        }
        else if(arr[mid]>=arr[end]){
            start=mid+1;
        }
        else{
            end=end-1;
        }
        mid=start+(end-start)/2;
    }
    
}
int search(int arr[],int size,int key){
    int start=0,end=size-1;
    int piv=pivot(arr,size);
    if(key<=arr[end]){
        start=piv;       
    }
    else{
        end=piv-1;
    }
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=end-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr[]={7,8,9,10,1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    int key=6;
    cout<<"Index of key in rotated array is: "<<search(arr,size,key);
}