#include <iostream>
#include<vector>
using namespace std;

void show(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr3[],int arr1[],int n,int arr2[],int m){
    int i=0,j=0,k=0;
    
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
             arr3[k++]=arr2[j++];
             
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
        
    }
    while(j<m){
        arr3[k++]=arr2[j++];        
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};

    int arr3[8]={0};
    merge(arr3,arr1,5,arr2,4);
    printf("Merged array:\n");
    show(arr3,9);
    return 0;
}