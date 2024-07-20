#include <iostream>
using namespace std;

int getsum(int* arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;

    //variable size array
    int *arr=new int[n];//this memory is from heap

    //taking input
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=getsum(arr,n);
    cout<<"Sum is "<<ans;

    return 0;
}