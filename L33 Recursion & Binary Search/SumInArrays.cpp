#include <iostream>
using namespace std;

int sum(int *arr,int size){

    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    return arr[0]+sum(arr+1,size-1);
}

int main(){
    int arr[]={1,11,111,1111,11111};
    int size=5;

    int ans=sum(arr,size);
    cout<<"Sum of array element is "<<ans;
    return 0;
}