#include <iostream>
using namespace std;

int main(){
    int arr[]={0,1,1,2,2,1,0,2,0,1,1,2};
    int size=sizeof(arr)/sizeof(int);
    int count[3]={0};
    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<count[0];i++){
        arr[i]=0;
    }
    for(int i=count[0];i<count[0]+count[1];i++){
        arr[i]=1;
    }
    for(int i=count[0]+count[1];i<count[0]+count[1]+count[2];i++){
        arr[i]=2;
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}