//space complexity O(1)
//time complexity O(n^2) also same for best and worst case complexity
#include <iostream>
using namespace std;

void sort(int arr[],int size){

     for (int  i = 0; i < size-1; i++)
    {
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(int);

   
    cout<<"Sorted array: "<<endl;
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}