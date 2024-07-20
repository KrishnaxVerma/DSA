//Jagged array can have different size of column 
#include <iostream>
using namespace std;

int main(){
    int row;

    cout<<"Enter number of rows: "<<endl;
    cin>>row;

    //creating 2D array
    int *col= new int[row];
    int **arr= new int*[row];
    for(int i=0;i<row;i++){
        cout<<"Enter size of column "<<i+1<<" : ";
        cin>>col[i];

        arr[i]=new int[col[i]];
        
        //Taking input
        cout<<"Enter elements: ";
        for(int j=0;j<col[i];j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl<<endl;

    //Showing output
    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Deleting dynamically created memory
    delete []col;
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    return 0;
}