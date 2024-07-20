#include <iostream>
using namespace std;

bool isSorted(int* arr,int size){

    //base case
    if(size==0||size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    //recursive relation
    return isSorted(arr+1,size-1);
}

int main(){
    int arr[]={1,3,14,15,17,19};
    int size=6;

    bool ans=isSorted(arr,size);
    if(ans){
        cout<<"Array is sorted ";
    }
    else{
        cout<<"Array is not sorted ";
    }
    return 0;
}