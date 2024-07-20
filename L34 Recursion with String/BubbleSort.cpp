#include <iostream>
using namespace std;

void bubble(int arr[],int n){
    if(n==1||n==0){
        return ;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubble(arr,n-1);
}
int main(){
    int arr[7]={3,5,2,94,8,9,7};
    int n=7;
    bubble(arr,n);

    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}