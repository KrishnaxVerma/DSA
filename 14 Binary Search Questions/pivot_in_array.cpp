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

int main(){
    int arr[]={7,8,9,1,2,3,4,5,6};//rotated sorted array
    //pivot element is 1
    int size=sizeof(arr)/sizeof(int);
    cout<<"Index of Pivot element in array is: "<<pivot(arr,size);
    return 0;
}