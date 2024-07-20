#include <iostream>
using namespace std;

int bs(int arr[][5],int r,int c,int t){

    int row=0;
    int col=c-1;

    while(row<r && col>=0){
    
        int element=arr[row][col];

        if(t==element){
            return 1;
        }
        else if(element>t){
            col--;
        }
        else{
            row++;
        }
        
    }
    return 0;
}

int main(){//array is sorted row and column wise
    int arr[5][5]={{1,4,7,11,12},
                   {2,5,8,12,19},
                   {3,6,9,16,22},
                   {10,13,14,17,24},
                   {18,21,23,26,30}};

    int target=17;
    if(bs(arr,5,5,target)){
        cout<<"Found";
    }
    else{
    cout<<"Not Found";
    }
    return 0;
}