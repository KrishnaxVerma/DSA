#include <iostream>
using namespace std;
void wave(int arr[][4],int r,int c){

for (int j = 0; j < c; j++){

    if(j&1){//odd up
    for(int i=r-1;i>=0;i--){
        cout<<arr[i][j]<<" ";
    }
    }
    else{//even down
        for(int i=0;i<r;i++){
        cout<<arr[i][j]<<" ";
    }
    }

}

}
int main(){
    int arr[4][4];
    
    cout<<"enter elements: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Wave pattern: "<<endl;
    wave(arr,4,4);
    return 0;
}