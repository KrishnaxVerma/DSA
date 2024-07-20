/*
time complexity is O(n^2)
best case complexity is O(n)
worst case complexity is O(n^2)
space complexity is O(1)

bubble sort is stable. It means that elements with the same key 
value maintain their relative order in the sorted output1

In-place sorting is a sorting algorithm that does not need an extra space 
and produces an output in the same memory that contains the data by transforming 
the input ‘in-place’1. It means that the algorithm does not use extra space for 
manipulating the input but may require a small though non-constant extra space 
for its operation. Usually, this space is O (log n), though sometimes anything 
in O (n) (Smaller than linear) is allowed1. An in-place algorithm uses constant 
space for producing the output (modifies the given array only). It sorts the list 
only by modifying the order of the elements within the list2. Examples of in-place 
sorting algorithms are Selection Sort, Bubble Sort, Insertion Sort, Heapsort1 and 
QuickSort3
*/
#include <iostream>
using namespace std;

void sort(int arr[],int size){

    for(int i=1;i<size;i++){
        bool swapped=false;
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;//as array is sorted
        }
    }
}

int main(){
    int arr[]={1,22,7,6,10,9,14};
    int size=sizeof(arr)/sizeof(int);

    sort(arr,size);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}