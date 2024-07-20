//binary search >> linear search
//array  should be sorted in ascending or descending order
//time complexity of binary search is O(log N)
//time complexity of linear search is O(N)

#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid= start+(end-start)/2;
    //mid=(start+end)/2 will not work if start+end >>INT_MAX
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int sizeofarr=sizeof(arr)/sizeof(int);
    int brr[]={90,91,92,93,94,95,96,97,98,99};
    int sizeofbrr=sizeof(brr)/sizeof(int);

    cout<<"Index of 7 in arr: "<<BinarySearch(arr,sizeofarr,7)<<endl;
    cout<<"Index of 93 in brr: "<<BinarySearch(brr,sizeofbrr,93)<<endl;
    return 0;
}