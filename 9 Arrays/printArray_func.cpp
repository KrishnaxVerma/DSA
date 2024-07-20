#include <iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[5]={1,2,3,4,5};
    printArray(a,5);
    cout<<endl;
    int b[10]={0};
    printArray(b,10);
    cout<<endl;

    //not appliacble if all values of array is not initialize
    //like int array[10]={1,2}; it will give size 10 instead of 2
    int arrsize=sizeof(a)/sizeof(int);
    cout<<endl<<"size of array a is: "<<arrsize;
    return 0;
}