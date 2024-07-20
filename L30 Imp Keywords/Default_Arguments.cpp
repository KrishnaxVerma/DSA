#include <iostream>
using namespace std;
/*
here if start is not guven as an argument the print fucntion by default
will assume it start=0
if given it will use that value

CONDITION:---
always put all the default argument in the rightmost part in the
function declaration
*/
void print(int arr[],int n,int start=0){
    
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,3,5,7,9};
    int size=5;

    print(arr,size);
    cout<<endl;
    print(arr,size,2);
    return 0;
}