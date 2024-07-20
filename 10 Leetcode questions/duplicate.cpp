#include <iostream>
using namespace std;
int duplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
    ans=ans^arr[i];
}
for(int i=1;i<size;i++){
    ans=ans^i;
}
return ans;
}
int main(){
    //size=n,numbers presnt from 1 to n-1 and one of them is repeated
    int arr[10]={1,2,3,4,5,6,6,7,8,9};
    cout<<"Duplicate element is :"<<duplicate(arr,10);
    return 0;
}