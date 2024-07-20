#include <iostream>
using namespace std;

int main(){
    int arr[]={0,1,1,1,0};
    int size=sizeof(arr)/sizeof(int);
    int count[2]={0};
    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<count[0];i++){
        arr[i]=0;
    }
    for(int i=count[0];i<count[0]+count[1];i++){
        arr[i]=1;
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}