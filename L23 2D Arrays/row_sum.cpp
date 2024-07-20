#include <iostream>
using namespace std;

void printrsum(int arr[][4],int r,int c){
    cout<<"Printing sum of rows: "<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
void printcsum(int arr[][4],int r,int c){
    cout<<"Printing sum of columns: "<<endl;
    for(int j=0;j<4;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
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

    printrsum(arr,3,4);
    printcsum(arr,3,4);

    return 0;
}