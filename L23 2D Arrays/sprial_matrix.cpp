#include <iostream>
using namespace std;

void spiral(int arr[][4],int r,int c){

    int count=0;
    int total=r*c;
    int startr=0,startc=0,endr=r-1,endc=c-1;

    while (count<total)
    {
        
        for(int j=startc;j<=endc && count<=total;j++){
            cout<<arr[startr][j]<<" ";
            count++;
        }
        startr++;
        for(int i=startr;i<=endr && count<=total;i++){
            cout<<arr[i][endc]<<" ";
            count++;
        }
        endc--;
        for(int j=endc;j>=startc && count<=total;j--){
            cout<<arr[endr][j]<<" ";
            count++;
        }
        endr--;
        for(int i=endr;i>=startr && count<=total;i--){
            cout<<arr[i][startc]<<" ";
            count++;
        }
        startc++;
        
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

    cout<<"Printing matrix pattern; "<<endl;
    spiral(arr,4,4);
    return 0;
}