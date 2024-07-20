/*
adaptable--->
an adaptive sorting algorithm can reduce the number of iteration and improve execution speed if
data is already sorted.

stable
used for sorting small size array or half sorted array

space complexity is O(n)
time complexity = best case = O(n)
                  worst case = O(n^2)
*/

#include <iostream>
using namespace std;

void sort(int arr[],int size){//for loop is used

    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];//shift
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;

    }
}

void sorting(int arr[],int size){//while loop which is better for this is used
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[]={1,2,5,4,3,4,9};
    int size = sizeof(arr)/sizeof(int);
    sorting(arr,size);
    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}