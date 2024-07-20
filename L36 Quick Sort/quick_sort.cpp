#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){

    int pivot = arr[s];

    int count = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i=s,j=e;

    while(i<pivotIndex && j>pivotIndex) {

        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivot) {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}
void quicksort(int arr[],int s,int e){

    //base case
    if(s>=e){
        return ;
    }

    //partition
    int p= partition(arr,s,e);

    //sort left part
    quicksort(arr,s,p-1);

    //sort right part
    quicksort(arr,p+1,e);
}

int main(){
    int arr[10]={55,34,2,7,9,5,77,34,21,3};
    int size=10;

    quicksort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}