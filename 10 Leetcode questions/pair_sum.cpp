#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]+arr[j]==n){
                // cout<<min(arr[i],arr[j])<<" "<<max(arr[i],arr[j])<<endl;
                cout<<arr[i]<<arr[j]<<endl;
            }
        }
    }
    return 0;
}