#include <iostream>
using namespace std;
void printarr(int arr[]){
    arr[0]=100;
    cout<<"In print funciton"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    printarr(arr);
        cout<<"In main funciton"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}