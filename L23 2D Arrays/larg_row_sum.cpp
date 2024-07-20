#include <iostream>
#include <limits.h>
using namespace std;

int largrowsum(int arr[][4],int r,int c){
    int maxind=0,max=INT_MIN;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        if(sum>max){
            max=sum;
            maxind=i;
        }
    }
    cout<<"Largest sum is: "<<max<<endl;
    return maxind;
}

int main(){
    int arr[3][4];
    cout<<"enter elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Index of Largest row sum is: "<<largrowsum(arr,3,4);
    return 0;
}