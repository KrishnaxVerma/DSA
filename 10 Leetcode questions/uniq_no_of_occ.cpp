//unique number of occurence
#include <iostream>
using namespace std;

int check(int arr[],int size){
    int count[100]={0};
    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<100;i++){
        for(int j=i+1;j<100;j++){
            if(count[i]==count[j]&&count[i]>0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int arr[]={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    //maximum value of an element is 100
    int size=sizeof(arr)/sizeof(int);
    if(check(arr,size)){
        cout<<"All element have unique number of occurence";
    }
    else{
        cout<<"All element does NOT have unique number of occurence";
    }
    
    return 0;
}