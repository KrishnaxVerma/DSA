#include <iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter rows: "<<endl;
    cin>>row;
    cout<<"Enter column: "<<endl;
    cin>>column;

    //creating 2d array
    int **arr= new int*[row];
    for(int i=0;i<column;i++){
        arr[i]=new int[i];
    }

    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }

    //showing output
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //release the dynamic memory

    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}

