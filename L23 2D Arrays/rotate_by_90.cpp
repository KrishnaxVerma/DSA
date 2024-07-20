#include <iostream>
using namespace std;

void rotate(int arr[][3],int r,int c,int ans[][3]){
    int x=0,y=0;
    for(int i=r-1;i>=0;i--){
        x=0;
        for(int j=0;j<c;j++){
            ans[x][y]=arr[i][j];
            x++;
        }     
        y++;   
    }
}
int main(){
    int arr[3][3];
    int r=3,c=3;
    int ans[3][3];
    
    cout<<"enter elements: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"After rotating it by 90 degree: "<<endl;
    rotate(arr,r,c,ans);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}