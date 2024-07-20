//PEAK ELEMENT IN MOUNTAIN ARRAY
#include <iostream>
using namespace std;

int peak(int arr[],int size){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[mid+1] && arr[mid]>=arr[mid-1]){
            return mid;
        }
        else if(arr[mid+1]>=arr[mid] && arr[mid]>=arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}

int main(){
    //mountain array means first increasing then decreasing 
    //peak means the maximum value in the array
    int arr[]={5,10,50,90,100,75,20,1};
    int size=sizeof(arr)/sizeof(int);
    cout<<"The index of peak element in the array is: "<<peak(arr,size);
    return 0;
}