//Selection Sort using recursion
#include <iostream>
using namespace std;

void sort(int *arr,int size){

    //base case
    if(size==0 || size ==1){
        return ;
    }

    int minindex=0;

    for(int i=0;i<size;i++){
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
    }
    swap(arr[0],arr[minindex]);

    sort(arr+1,size-1);

}

int main(){
    int arr[10]={99,66,33,11,55,88,6,4,3,21};
    int size=10;
    
    sort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}