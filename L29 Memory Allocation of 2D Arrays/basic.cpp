#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size : "<<endl;
    cin>>n;

    //creatin 2d array
    int **arr= new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //showing output
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}