/*
Fastest among all sorting algoritm till now
time complexity O(nlogn)
space complexity O(n)
*/
#include <iostream>
using namespace std;

void mergearr(int arr[],int s,int e){

    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first= new int[len1];
    int *second= new int[len2];

    //copy values
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

    //merge 2 sorted array

    int index1=0;
    int index2=0;
    k=s;

    while (index1<len1 && index2<len2){
       
       if(first[index1]<second[index2]){
        arr[k++]=first[index1++];
       }
       else{
        arr[k++]=second[index2++];
       }
    }

    while(index1<len1){
        arr[k++]=first[index1++];
    }
    while(index2<len2){
        arr[k++]=second[index2++];
    }
    
    delete []first;
    delete []second;
}

void mergesort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }

    int mid=s+(e-s)/2;

    //left part
    mergesort(arr,s,mid);

    //right part
    mergesort(arr,mid+1,e);

    ///merge
    mergearr(arr,s,e);
}
int main(){
    int arr[8]={2,7,9,5,77,34,21,3};
    int size=8;

    mergesort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}