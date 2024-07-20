#include <iostream>
using namespace std;

int found(int arr[][4],int r,int c,int t){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(t==arr[i][j])
            return 1;
        }
    }
    return 0;
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

    cout<<"Enter target: "<<endl;
    int target;
    cin>>target;

    if(found(arr,3,4,target)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }


    return 0;
}